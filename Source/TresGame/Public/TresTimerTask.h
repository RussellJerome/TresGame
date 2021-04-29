// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresTimerTask.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTimerTask : public UTresTaskBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void Stop(const FName& RemoteEventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void Start(const FName& RemoteEventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void SetNowTime(float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void Reset(const FName& RemoteEventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void Init() {};

	UFUNCTION(BlueprintPure, Category = "TresTimerTask")
	float GetNowTime() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void AddTimeAndEvent(float Time, const FName& RemoteEventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresTimerTask")
	void AddMultiTimeAndEvent(TArray<struct FTresTimerTaskData> DataArray) {};
};
