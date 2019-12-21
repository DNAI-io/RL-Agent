// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GrpcUnrealLibrary.h"

#pragma warning(disable:4582)
#pragma warning(disable:4583)

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnvParameters.h"
#include "Agent.generated.h"


UCLASS(BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RL_AGENT_API UAgent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAgent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
		UBrain *brain;

	UPROPERTY(BlueprintReadOnly, Category = "Settings")
		UGrpClientWrapper *grcpClient;
};
