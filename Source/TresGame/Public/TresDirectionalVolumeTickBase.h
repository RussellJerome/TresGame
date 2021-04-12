// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresDirectionalVolumeTickBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresDirectionalVolumeTickBase : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolumeTickBase")
	float m_PermitAngle; 

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolumeTickBase")
	//class UTresDebugArrowComponent* DebugArrowComponent;

	UFUNCTION(BlueprintCallable, Category = "TresDirectionalVolumeTickBase")
	void SetEnableExecute(bool Enable) {};

	UFUNCTION(BlueprintPure, Category = "TresDirectionalVolumeTickBase")
	bool IsEnableExecute() { return false; };
};
