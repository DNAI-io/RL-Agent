#pragma once

#include <string>
#include <vector>
#include <functional>
#include <memory>

#include <grpcpp/grpcpp.h>

#include "proto/gRPCCommunication/GrpcPackage.pb.h"
#include "proto/gRPCCommunication/GrpcHeader.pb.h"
#include "proto/gRPCCommunication/GrpcCommunicator.grpc.pb.h"

using grpc::ClientAsyncResponseReader;
using grpc::CompletionQueue;
using grpc::ClientContext;
using grpc::Status;

typedef std::function<void(const gRPCCommunication::GrpcPackage&)> GrpcCallback;

class GrpClient {
public:
	GrpClient(std::shared_ptr<grpc::Channel> channel);

	gRPCCommunication::GrpcPackage* SendPackage(const gRPCCommunication::GrpcPackage& package);

	void AsyncSendPackage(const gRPCCommunication::GrpcPackage& package, GrpcCallback callback);

	void AsyncCompleteRpc();

private:
	struct AsyncClientCall {

		GrpcCallback callback;

		// Container for the data we expect from the server.
		gRPCCommunication::GrpcPackage reply;

		// Context for the client. It could be used to convey extra information to
		// the server and/or tweak certain RPC behaviors.
		ClientContext context;

		// Storage for the status of the RPC upon completion.
		Status status;

		std::unique_ptr<ClientAsyncResponseReader<gRPCCommunication::GrpcPackage>> response_reader;
	};

	// Out of the passed in Channel comes the stub, stored here, our view of the
	// server's exposed services.
	std::unique_ptr<gRPCCommunication::GrpcCommunicator::Stub> stub_;

	// The producer-consumer queue we use to communicate asynchronously with the
	// gRPC runtime.
	CompletionQueue cq_;
};

