// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GrpcUnrealLibrary.h"
#include "Engine/Classes/GameFramework/PlayerInput.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnvParameters.generated.h"


UENUM(BlueprintType)
enum class ERLType : uint8 {
	VE_PPO UMETA(DisplayName = "PPO"),
	VE_CUSTOM UMETA(DisplayName = "CUSTOM")
};

USTRUCT(BLueprintType)
struct RL_AGENT_API FPPOData
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int numAction = 4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float valueFactor = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float entropyFactor = 0.01;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float epsilon = 0.1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float learningRate = 0.00025;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString learningRateDecay = "linear";

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float gradClip = 0.5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float loadEpisodeSaved = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float savedEpisode = 500;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float timeHorizon = 128;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float batchSize = 32;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float gamma = 0.99;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float lam = 0.95;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int epoch = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int actors = 8;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int finalStep = 1000000;
};

UENUM(BlueprintType)
enum class EActionSpace : uint8
{
	VE_DISCRET UMETA(DisplayName = "Discret"),
	VE_CONTINUOUS UMETA(DisplayName = "Continuous")
};

USTRUCT(BlueprintType)
struct RL_AGENT_API FDiscretAction
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FInputActionKeyMapping Key;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Value;
};

USTRUCT(BlueprintType)
struct RL_AGENT_API FContinuousAction
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FInputAxisKeyMapping Axis;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Min;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Max;
};

USTRUCT(BlueprintType)
struct RL_AGENT_API FDiscretSpace
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TMap<FString, FDiscretAction> Actions;
};

USTRUCT(BlueprintType)
struct RL_AGENT_API FContinuousSpace
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TMap<FString, FContinuousAction> Actions;
};

UCLASS(BlueprintType)
class RL_AGENT_API UDiscretActions : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FDiscretSpace PPO_Settings;
};

UCLASS(BlueprintType)
class RL_AGENT_API UContinuousActions : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FContinuousSpace PPO_Settings;
};

UCLASS(BlueprintType)
class RL_AGENT_API UPPOParameters : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training")
		FPPOData PPO_Settings;
};

UCLASS(BlueprintType)
class RL_AGENT_API UCustomParameters : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training")
		TArray<FCustomArg> Custom_Settings;
};

/**
 *
 */
UCLASS(BlueprintType)
class RL_AGENT_API UEnvParameters : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action Space")
		EActionSpace ActionType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "ActionType == EActionSpace::VE_DISCRET"), Category = "Action Space")
		UDiscretActions *DiscretActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "ActionType == EActionSpace::VE_CONTINUOUS"), Category = "Action Space")
		UContinuousActions *ContinuousActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training")
		ERLType RLType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training", meta = (EditCondition = "RLType == ERLType::VE_PPO"))
		UPPOParameters* PPOSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "RLType == ERLType::VE_CUSTOM"), Category = "Training")
		UCustomParameters* CustomSettings;
};

UCLASS(BlueprintType)
class RL_AGENT_API UBrain : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action Space")
		EActionSpace ActionType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "ActionType == EActionSpace::VE_DISCRET"), Category = "Action Space")
		FDiscretSpace DiscretActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "ActionType == EActionSpace::VE_CONTINUOUS"), Category = "Action Space")
		FContinuousSpace ContinuousActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training")
		ERLType RLType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training", meta = (EditCondition = "RLType == ERLType::VE_PPO"))
		FPPOData PPOSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "RLType == ERLType::VE_CUSTOM"), Category = "Training")
		TArray<FCustomArg> CustomSettings;
};



