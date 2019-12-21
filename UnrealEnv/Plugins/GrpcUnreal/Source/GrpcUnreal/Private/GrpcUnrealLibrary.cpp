// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GrpcUnrealLibrary.h"
#include "GrpcUnreal.h"
#include "gRPCCommunication/GrpcPackage.pb.h"
#include "gRPCCommunication/GrpcParameter.pb.h"

#pragma warning(disable:4800) 
#pragma warning(disable:4668)  
#pragma warning(disable:4273)  
#pragma warning(disable:4522)  
#pragma warning(disable:4146)
#pragma warning(disable:4018)
#pragma warning(disable:4541)
#pragma warning(disable:4101)
#pragma warning(disable:4018)
#pragma warning(disable:4530)
#pragma warning(disable:4583)

#include "torch/script.h"

#include <functional>

UGrpcUnrealLibrary::UGrpcUnrealLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UGrpcUnrealLibrary::BlueprintTestSampleFunction(float Param)
{
	return -1;
}

UGrpClientWrapper::UGrpClientWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UGrpClientWrapper::CommandCallback(const gRPCCommunication::GrpcPackage& package)
{
	gRPCCommunication::GrpCommandType cmd = package.header().commandtypes();
	switch (cmd)
	{
	case gRPCCommunication::RESET:
		_Reset(package);
		break;
	case gRPCCommunication::STEP_INPUT:
		_Step(package);
		break;
	case gRPCCommunication::QUIT:
		_Quit(package);
		break;
	default:
		break;
	}
}

void UGrpClientWrapper::_Reset(const gRPCCommunication::GrpcPackage& package)
{
	Reset();
	running = true;
	_Step(package);
	//std::cout << "Reset Env" << std::endl;
	//gRPCCommunication::GrpcPackage request;
	//gRPCCommunication::GrpcHeader* header = new gRPCCommunication::GrpcHeader();
	//header->set_magicnumber(0x646e6169);
	//header->set_status(200);
	//header->set_commandtypes(gRPCCommunication::GrpCommandType::STEP_OUTPUT);
	//request.set_allocated_header(header);
	//client->AsyncSendPackage(request, std::bind(&UGrpClientWrapper::CommandCallback, this, std::placeholders::_1));
}

void UGrpClientWrapper::_Step(const gRPCCommunication::GrpcPackage& package)
{
	const google::protobuf::RepeatedField<float> gactions = package.input().actions();
	for (int i = 0; i < gactions.size(); i++)
	{
		actions.Add(gactions[i]);
	}
	m_vectorObervations.Reset();
	inputStepReady = true;
}

void UGrpClientWrapper::_Quit(const gRPCCommunication::GrpcPackage& package)
{
	Quit();
}

void UGrpClientWrapper::Init(const FString& URI)
{
	std::string suri(TCHAR_TO_UTF8(*URI));

	client = new GrpClient(grpc::CreateChannel(suri, grpc::InsecureChannelCredentials()));

	std::thread* thread_ = new std::thread(&GrpClient::AsyncCompleteRpc, client);
}

UGrpClientWrapper* UGrpClientWrapper::CreateRpcClient(TSubclassOf<UGrpClientWrapper> Class, const FString& URI, UObject* Outer)
{
	UObject* const RealOuter = Outer ? Outer : (UObject*)GetTransientPackage();

	if (UGrpClientWrapper* const Client = NewObject<UGrpClientWrapper>(RealOuter, *Class))
	{
		Client->Init(URI);
		UE_LOG(LogTemp, Verbose, TEXT("An instance of %s has been created and initialized"), *(Class->GetName()));
		return Client;
	}
	return nullptr;
}

void UGrpClientWrapper::Connect(const TArray<FStringArg>& args)
{
	gRPCCommunication::GrpcPackage request;
	gRPCCommunication::GrpcHeader* header = new gRPCCommunication::GrpcHeader();
	header->set_magicnumber(0x646e6169);
	header->set_status(200);
	header->set_commandtypes(gRPCCommunication::GrpCommandType::CONNECT);
	request.set_allocated_header(header);

	for (size_t i = 0; i < args.Num(); i++)
	{	
		gRPCCommunication::GrpcParameter* param = request.add_trainingparameters();
		param->set_allocated_name(new std::string(TCHAR_TO_UTF8(*args[i].Name)));
		param->set_allocated_type(new std::string(TCHAR_TO_UTF8(*args[i].Type)));
		param->set_allocated_value(new std::string(TCHAR_TO_UTF8(*args[i].Value)));
	}
	client->AsyncSendPackage(request, std::bind(&UGrpClientWrapper::CommandCallback, this, std::placeholders::_1));
}

void UGrpClientWrapper::CallStep()
{
	bool done = false;
	float reward = 0;
	Step(actions, done, reward);
	actions.Empty();

	//std::string obervations(TCHAR_TO_UTF8(*observations));
	gRPCCommunication::GrpcHeader* header = new gRPCCommunication::GrpcHeader();
	header->set_magicnumber(0x646e6169);
	header->set_status(200);
	header->set_commandtypes(gRPCCommunication::GrpCommandType::STEP_OUTPUT);

	gRPCCommunication::GrpcPackage request;
	gRPCCommunication::GrpcStepOutput* output = new gRPCCommunication::GrpcStepOutput();
	request.set_allocated_header(header);
	output->set_done(done);
	output->set_reward(reward);
	for (int32 i = 0; i < m_vectorObervations.Num(); i++)
	{
		output->add_floatobervations(m_vectorObervations[i]);
	}
	request.set_allocated_output(output);
	client->AsyncSendPackage(request, std::bind(&UGrpClientWrapper::CommandCallback, this, std::placeholders::_1));
	inputStepReady = false;
}

void UGrpClientWrapper::AddQuaternionObervation(const FQuat& quat)
{
	m_vectorObervations.Add(quat.X);
	m_vectorObervations.Add(quat.Y);
	m_vectorObervations.Add(quat.Z);
	m_vectorObervations.Add(quat.W);
}

void UGrpClientWrapper::AddVectorObervation(const FVector& vector)
{
	m_vectorObervations.Add(vector.X);
	m_vectorObervations.Add(vector.Y);
	m_vectorObervations.Add(vector.Z);
}

void UGrpClientWrapper::AddVector2DObervation(const FVector2D& vector)
{
	m_vectorObervations.Add(vector.X);
	m_vectorObervations.Add(vector.Y);
}

void UGrpClientWrapper::AddFloatObervation(const float& value)
{
	m_vectorObervations.Add(value);
}

void UGrpClientWrapper::AddBoolObervation(const bool& value)
{
	m_vectorObervations.Add((float)value);
}

void UGrpClientWrapper::AddIntObervation(const int& value)
{
	m_vectorObervations.Add((float)value);
}

void UGrpcUnrealLibrary::LoadModel(const FString& path)
{
	torch::jit::script::Module module;
	try {
		// Deserialize the ScriptModule from a file using torch::jit::load().
		module = torch::jit::load(TCHAR_TO_UTF8(*path));
	}
	catch (const c10::Error & e) {
		std::cout << "failed" << std::endl;
		std::cerr << "error loading the model\n";
	}

	try {
		// Create a vector of inputs.
		torch::Device device(torch::kCUDA);
		std::vector<torch::jit::IValue> inputs;
		std::vector<torch::jit::IValue> inputs2;
		inputs.push_back(torch::zeros({ 1, 8 }, device));
		inputs2.push_back(torch::ones({ 1, 8 }, device));

		// Execute the model and turn its output into a tensor.
		at::Tensor output = module.forward(inputs).toTensor();
		std::cout << output.slice(/*dim=*/1, /*start=*/0, /*end=*/5) << '\n';
		at::Tensor output2 = module.forward(inputs2).toTensor();
		std::cout << output2.slice(/*dim=*/1, /*start=*/0, /*end=*/5) << '\n';
	}
	catch (std::exception &e)
	{

	}
}
