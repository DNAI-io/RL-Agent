// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#pragma warning(disable:4582)
#pragma warning(disable:4583)
#include "Modules/ModuleManager.h"

class FRL_AgentModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
