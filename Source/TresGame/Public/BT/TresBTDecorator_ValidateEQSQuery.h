// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTDecorator_ValidateEQSQuery.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ValidateEQSQuery : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateEQSQuery")
	class UEnvQuery* QueryTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateEQSQuery")
	TArray<FEnvNamedValue> QueryParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateEQSQuery")
	float m_UpdateMinTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateEQSQuery")
	bool m_bMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateEQSQuery")
	float m_UpdateMaxTime;
};
