// DynamicGrpc.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

#include <grpcpp/grpcpp.h>

#include "GrpcClient.h"

#include "proto/gRPCCommunication/GrpcHeader.pb.h"
#include "proto/gRPCCommunication/GrpcCommunicator.pb.h"
#include "proto/gRPCCommunication/GrpcPackage.pb.h"
#include "proto/gRPCCommunication/GrpcProtoType.pb.h"
#include "proto/gRPCCommunication/GrpcCommunicator.grpc.pb.h"


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using gRPCCommunication::GrpcPackage;
using gRPCCommunication::GrpcHeader;
using gRPCCommunication::GrpcProtoType;
using gRPCCommunication::GrpcCommunicator;
using gRPCCommunication::GrpCommandType;

GrpClient::GrpClient(std::shared_ptr<Channel> channel)
	: stub_(GrpcCommunicator::NewStub(channel)) {
}

//std::string GrpClient::SendRandomFloats(const std::vector<float> &inputs) {
//	// Data we are sending to the server.
//	GrpcPackage request;
//	GrpcHeader* header = new GrpcHeader();
//	header->set_magicnumber(0x646e6169);
//	header->set_status(200);
//	header->add_packagetypes(GrpcProtoType::FLOAT);
//	request.set_allocated_header(header);
//
//	const char* bytes = reinterpret_cast<const char*>(&inputs[0]);
//	std::string* data = new std::string(bytes);
//	request.set_allocated_content(data);
//
//	// Container for the data we expect from the server.
//	GrpcPackage reply;
//
//	// Context for the client. It could be used to convey extra information to
//	// the server and/or tweak certain RPC behaviors.
//	ClientContext context;
//
//	// The actual RPC.
//	Status status = stub_->Communicate(&context, request, &reply);
//
//	// Act upon its status.
//	if (status.ok() && reply.header().status() == 200) {
//		return reply.content();
//	}
//	else {
//		std::cout << status.error_code() << ": " << status.error_message()
//			<< std::endl;
//		return "RPC failed";
//	}
//}

GrpcPackage *GrpClient::SendPackage(const gRPCCommunication::GrpcPackage &package) {

	// Container for the data we expect from the server.
	GrpcPackage* reply = new GrpcPackage();

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	ClientContext context;

	// The actual RPC.
	Status status = stub_->Communicate(&context, package, reply);

	// Act upon its status.
	if (status.ok() && reply->header().status() == 200) {
		return reply;
	}
	else {
		std::cout << status.error_code() << ": " << status.error_message()
			<< std::endl;
		return NULL;
	}
}

void GrpClient::AsyncSendPackage(const gRPCCommunication::GrpcPackage& package, GrpcCallback callback)
{

	// Call object to store rpc data
	AsyncClientCall* call = new AsyncClientCall;

	call->callback = callback;

	// stub_->PrepareAsyncSayHello() creates an RPC object, returning
	// an instance to store in "call" but does not actually start the RPC
	// Because we are using the asynchronous API, we need to hold on to
	// the "call" instance in order to get updates on the ongoing RPC.
	call->response_reader =
		stub_->PrepareAsyncCommunicate(&call->context, package, &cq_);

	// StartCall initiates the RPC call
	call->response_reader->StartCall();

	// Request that, upon completion of the RPC, "reply" be updated with the
	// server's response; "status" with the indication of whether the operation
	// was successful. Tag the request with the memory address of the call object.
	call->response_reader->Finish(&call->reply, &call->status, (void*)call);
}

void GrpClient::AsyncCompleteRpc()
{
	void* got_tag;
	bool ok = false;

	// Block until the next result is available in the completion queue "cq".
	while (cq_.Next(&got_tag, &ok)) {
		// The tag in this example is the memory location of the call object
		AsyncClientCall* call = static_cast<AsyncClientCall*>(got_tag);

		// Verify that the request was completed successfully. Note that "ok"
		// corresponds solely to the request for updates introduced by Finish().
		GPR_ASSERT(ok);

		if (call->status.ok())
			call->callback(call->reply);
		else
			std::cout << "RPC failed" << std::endl;

		// Once we're complete, deallocate the call object.
		delete call;
	}
}
