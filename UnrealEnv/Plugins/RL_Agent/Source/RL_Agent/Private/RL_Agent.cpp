// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma warning(disable:4582)
#pragma warning(disable:4583)
#include "RL_Agent.h"

#define LOCTEXT_NAMESPACE "FRL_AgentModule"

void FRL_AgentModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FRL_AgentModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRL_AgentModule, RL_Agent)