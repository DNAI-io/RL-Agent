// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RL_AgentBPLibrary.h"
#include "RL_Agent.h"

URL_AgentBPLibrary::URL_AgentBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float URL_AgentBPLibrary::RL_AgentSampleFunction(float Param)
{
	return -1;
}

void URL_AgentBPLibrary::ConvertCustomArgsToStringArgs(const TArray<FCustomArg> &args, TArray<FStringArg>& sargs)
{
	for (int i = 0; i < args.Num(); i++)
	{
		FStringArg arg;
		arg.Name = args[i].Name;
		switch (args[i].Type)
		{
		case EParamType::VE_INT:
			arg.Type = "int";
			break;
		case EParamType::VE_FLOAT:
			arg.Type = "float";
			break;
		case EParamType::VE_STRING:
			arg.Type = "str";
			break;
		default:
			break;
		}
		arg.Value = args[i].Value;
		sargs.Add(arg);
	}
}

void URL_AgentBPLibrary::ConvertPPOToStringArgs(const FPPOData &args, TArray<FStringArg>& sargs)
{
	FStringArg arg;
	arg.Name = "num-action";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.numAction);
	sargs.Add(arg);
	arg.Name = "value-factor";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.valueFactor);
	sargs.Add(arg);
	arg.Name = "entropy-factor";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.entropyFactor);
	sargs.Add(arg);
	arg.Name = "epsilon";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.epsilon);
	sargs.Add(arg);
	arg.Name = "learning-rate";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.learningRate);
	sargs.Add(arg);
	arg.Name = "learning-rate-decay";
	arg.Type = "str";
	arg.Value = args.learningRateDecay;
	sargs.Add(arg);
	arg.Name = "grad-clip";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.gradClip);
	sargs.Add(arg);
	
	arg.Name = "time-horizon";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.timeHorizon);
	sargs.Add(arg); 
	arg.Name = "batch-size";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.batchSize);
	sargs.Add(arg);
	arg.Name = "gamma";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.gamma);
	sargs.Add(arg);
	arg.Name = "lam";
	arg.Type = "float";
	arg.Value = FString::SanitizeFloat(args.lam);
	sargs.Add(arg);

	arg.Name = "epoch";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.epoch);
	sargs.Add(arg);
	arg.Name = "actors";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.actors);
	sargs.Add(arg);
	arg.Name = "final-step";
	arg.Type = "int";
	arg.Value = FString::FromInt(args.finalStep);
	sargs.Add(arg);
}

