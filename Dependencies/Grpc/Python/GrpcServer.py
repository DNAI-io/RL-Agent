from concurrent import futures
import logging
import struct
import grpc
from ctypes import *
import random

import GeneratedProto.gRPCCommunication.GrpcCommunicator_pb2_grpc as GrpcCommunicator
import GeneratedProto.gRPCCommunication.GrpcPackage_pb2 as GrpcPackage
import GeneratedProto.gRPCCommunication.GrpcHeader_pb2 as GrpcHeader
import GeneratedProto.gRPCCommunication.GrpCommandType_pb2 as GrpcCommandType
import GeneratedProto.gRPCCommunication.GrpcStepOutput_pb2 as GrpcStepOutput
import GeneratedProto.gRPCCommunication.GrpcStepInput_pb2 as GrpcStepInput


class GrpcService(GrpcCommunicator.GrpcCommunicatorServicer):
    def __init__(self):
        self.episode = 0
        self.num_episode = 100
        self.arglist = {}

    @staticmethod
    def parse_args(args):
        ppo = {}
        for arg in args:
            if arg.type == 'int':
                ppo[arg.name] = int(arg.value)
            elif arg.type == 'float':
                ppo[arg.name] = float(arg.value)
            elif arg.type == 'str':
                ppo[arg.name] = arg.value
        return ppo

    def Communicate(self, request: GrpcPackage.GrpcPackage, context):
        cmd = request.header.commandTypes
        response = GrpcPackage.GrpcPackage()
        if cmd == GrpcCommandType.CONNECT:
            response.header.commandTypes = GrpcCommandType.RESET
        if cmd == GrpcCommandType.RESET:
            response.header.commandTypes = GrpcCommandType.STEP_INPUT
            response.input.actions.append(random.randrange(0, 4))
        elif cmd == GrpcCommandType.STEP_OUTPUT:
            if request.output.done:
                if self.episode < self.num_episode:
                    response.header.commandTypes = GrpcCommandType.RESET
                    response.input.actions.append(random.randrange(0, 4))
                    self.episode += 1
                    print("Episode " + str(self.episode) + " finished")
                else:
                    response.header.commandTypes = GrpcCommandType.QUIT
            else:
                response.header.commandTypes = GrpcCommandType.STEP_INPUT
                response.input.actions.append(random.randrange(0, 4))
        elif cmd == GrpcCommandType.QUIT:
            response.header.commandTypes = GrpcCommandType.QUIT
        return response


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    GrpcCommunicator.add_GrpcCommunicatorServicer_to_server(GrpcService(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    server.wait_for_termination()


if __name__ == '__main__':
    logging.basicConfig()
    serve()
