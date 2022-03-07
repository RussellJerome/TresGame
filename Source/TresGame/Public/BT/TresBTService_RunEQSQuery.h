// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTService_RunEQSQuery.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_RunEQSQuery : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	class UEnvQuery* EQSQueryOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	TArray<FEnvNamedValue> QueryParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	TEnumAsByte<EEnvQueryRunMode::Type> RunMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	bool bInvalidateBlackboardKeyOnFailure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	bool bUseBlackboardQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	FBlackboardKeySelector EQSQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_RunEQSQuery")
	FBlackboardKeySelector Result;
};
