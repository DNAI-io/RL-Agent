// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

THIRD_PARTY_INCLUDES_START
#pragma warning(disable:4582)
#pragma warning(disable:4583)
#include "GrpcClient.h"
THIRD_PARTY_INCLUDES_END

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "GrpcUnrealLibrary.generated.h"

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

UENUM(BlueprintType)
enum class EParamType : uint8
{
	VE_INT UMETA(DisplayName = "Integer"),
	VE_FLOAT UMETA(DisplayName = "Decimal"),
	VE_STRING UMETA(DisplayName = "string")
};

USTRUCT(BlueprintType)
struct FCustomArg
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EParamType Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Value;
};

USTRUCT(BlueprintType)
struct FStringArg
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Value;
};

UCLASS(BlueprintType, Blueprintable)
class UGrpClientWrapper : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Init GRCP Client"))
		void Init(const FString& URI);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Create GRPC Client", DeterminesOutputType = "Class"))
	static UGrpClientWrapper* CreateRpcClient(TSubclassOf<UGrpClientWrapper> Class, const FString& URI, UObject* Outer = nullptr);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Connect GRCP Client"))
		void Connect(const TArray<FStringArg>& args);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Call step function"))
		void CallStep();

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add quaternion obervation"))
		void AddQuaternionObervation(const FQuat& quat);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add vector obervation"))
		void AddVectorObervation(const FVector &vector);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add vector 2D obervation"))
		void AddVector2DObervation(const FVector2D& vector);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add float obervation"))
		void AddFloatObervation(const float& value);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add bool obervation"))
		void AddBoolObervation(const bool &value);

	UFUNCTION(BlueprintCallable, Category = "GRPC Blueprint|GrpcClientWrapper", meta = (DisplayName = "Add int obervation"))
		void AddIntObervation(const int& value);

	UFUNCTION(BlueprintImplementableEvent)
		void Step(const TArray<float> &Actions, bool& done, float& reward);

	UFUNCTION(BlueprintImplementableEvent)
		void Reset();

	UFUNCTION(BlueprintImplementableEvent)
		void Quit();

	UPROPERTY(BlueprintReadOnly, Category = "GRPC Blueprint|Running")
		bool running = false;

	UPROPERTY(BlueprintReadOnly, Category = "GRPC Blueprint|Input step ready")
		bool inputStepReady = false;

	UPROPERTY(BlueprintReadOnly, Category = "GRPC Blueprint|Action")
		TArray<float> actions;

	UPROPERTY(BlueprintReadOnly, Category = "GRPC Blueprint|Action")
		bool done;


private:
	void CommandCallback(const gRPCCommunication::GrpcPackage& package);
	void _Reset(const gRPCCommunication::GrpcPackage& package);
	void _Step(const gRPCCommunication::GrpcPackage& package);
	void _Quit(const gRPCCommunication::GrpcPackage& package);
	GrpClient* client;
	TArray<float> m_vectorObervations;
};


UCLASS()
class UGrpcUnrealLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "BlueprintTest sample test testing"), Category = "BlueprintTestTesting")
	static float BlueprintTestSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Model", Keywords = "Load model"), Category = "BlueprintTestTesting")
		static void LoadModel(const FString& path);
};
