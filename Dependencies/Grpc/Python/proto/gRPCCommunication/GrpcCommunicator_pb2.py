# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proto/gRPCCommunication/GrpcCommunicator.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from proto.gRPCCommunication import GrpcPackage_pb2 as proto_dot_gRPCCommunication_dot_GrpcPackage__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='proto/gRPCCommunication/GrpcCommunicator.proto',
  package='gRPCCommunication',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n.proto/gRPCCommunication/GrpcCommunicator.proto\x12\x11gRPCCommunication\x1a)proto/gRPCCommunication/GrpcPackage.proto2c\n\x10GrpcCommunicator\x12O\n\x0b\x43ommunicate\x12\x1e.gRPCCommunication.GrpcPackage\x1a\x1e.gRPCCommunication.GrpcPackage\"\x00\x62\x06proto3')
  ,
  dependencies=[proto_dot_gRPCCommunication_dot_GrpcPackage__pb2.DESCRIPTOR,])



_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_GRPCCOMMUNICATOR = _descriptor.ServiceDescriptor(
  name='GrpcCommunicator',
  full_name='gRPCCommunication.GrpcCommunicator',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=112,
  serialized_end=211,
  methods=[
  _descriptor.MethodDescriptor(
    name='Communicate',
    full_name='gRPCCommunication.GrpcCommunicator.Communicate',
    index=0,
    containing_service=None,
    input_type=proto_dot_gRPCCommunication_dot_GrpcPackage__pb2._GRPCPACKAGE,
    output_type=proto_dot_gRPCCommunication_dot_GrpcPackage__pb2._GRPCPACKAGE,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_GRPCCOMMUNICATOR)

DESCRIPTOR.services_by_name['GrpcCommunicator'] = _GRPCCOMMUNICATOR

# @@protoc_insertion_point(module_scope)