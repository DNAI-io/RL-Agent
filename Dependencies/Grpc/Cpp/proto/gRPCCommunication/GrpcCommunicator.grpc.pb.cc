// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/gRPCCommunication/GrpcCommunicator.proto

#include "proto/gRPCCommunication/GrpcCommunicator.pb.h"
#include "proto/gRPCCommunication/GrpcCommunicator.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace gRPCCommunication {

static const char* GrpcCommunicator_method_names[] = {
  "/gRPCCommunication.GrpcCommunicator/Communicate",
};

std::unique_ptr< GrpcCommunicator::Stub> GrpcCommunicator::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GrpcCommunicator::Stub> stub(new GrpcCommunicator::Stub(channel));
  return stub;
}

GrpcCommunicator::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Communicate_(GrpcCommunicator_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GrpcCommunicator::Stub::Communicate(::grpc::ClientContext* context, const ::gRPCCommunication::GrpcPackage& request, ::gRPCCommunication::GrpcPackage* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Communicate_, context, request, response);
}

void GrpcCommunicator::Stub::experimental_async::Communicate(::grpc::ClientContext* context, const ::gRPCCommunication::GrpcPackage* request, ::gRPCCommunication::GrpcPackage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Communicate_, context, request, response, std::move(f));
}

void GrpcCommunicator::Stub::experimental_async::Communicate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gRPCCommunication::GrpcPackage* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Communicate_, context, request, response, std::move(f));
}

void GrpcCommunicator::Stub::experimental_async::Communicate(::grpc::ClientContext* context, const ::gRPCCommunication::GrpcPackage* request, ::gRPCCommunication::GrpcPackage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Communicate_, context, request, response, reactor);
}

void GrpcCommunicator::Stub::experimental_async::Communicate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::gRPCCommunication::GrpcPackage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Communicate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::gRPCCommunication::GrpcPackage>* GrpcCommunicator::Stub::AsyncCommunicateRaw(::grpc::ClientContext* context, const ::gRPCCommunication::GrpcPackage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gRPCCommunication::GrpcPackage>::Create(channel_.get(), cq, rpcmethod_Communicate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::gRPCCommunication::GrpcPackage>* GrpcCommunicator::Stub::PrepareAsyncCommunicateRaw(::grpc::ClientContext* context, const ::gRPCCommunication::GrpcPackage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::gRPCCommunication::GrpcPackage>::Create(channel_.get(), cq, rpcmethod_Communicate_, context, request, false);
}

GrpcCommunicator::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GrpcCommunicator_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GrpcCommunicator::Service, ::gRPCCommunication::GrpcPackage, ::gRPCCommunication::GrpcPackage>(
          std::mem_fn(&GrpcCommunicator::Service::Communicate), this)));
}

GrpcCommunicator::Service::~Service() {
}

::grpc::Status GrpcCommunicator::Service::Communicate(::grpc::ServerContext* context, const ::gRPCCommunication::GrpcPackage* request, ::gRPCCommunication::GrpcPackage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace gRPCCommunication
