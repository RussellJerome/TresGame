// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresMapSetVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapSetVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSetVolume")
	class UTresMapSet* MapSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSetVolume")
	FName commandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSetVolume")
	bool bUseOverlapManager;
	
	UFUNCTION(BlueprintCallable, Category = "TresMapSetVolume")
	void ChangeMapSetAndCommandName(class UTresMapSet* newMapSet, const FName& newCommandName) {};

	UFUNCTION(BlueprintCallable, Category = "TresMapSetVolume")
	void ChangeMapSet(class UTresMapSet* newMapSet) {};

	UFUNCTION(BlueprintCallable, Category = "TresMapSetVolume")
	void ChangeCommandName(const FName& newCommandName) {};
};
