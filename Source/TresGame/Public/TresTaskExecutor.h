// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTaskExecuterBase.h"
#include "TresTaskExecutor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTaskExecutor : public UTresTaskExecuterBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTaskExecutor")
	TArray<class UTresTaskBase*> m_TaskArrayGarbage;

	UFUNCTION(BlueprintPure, Category = "TresTaskExecutor")
	TArray<class UTresTaskBase*> GetTaskArray() { return TArray<class UTresTaskBase*>(); };

	UFUNCTION(BlueprintCallable, Category = "TresTaskExecutor")
	void DestroyAll() {};
};
