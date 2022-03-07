// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex773_ExecNextWaveEclipse13.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_e_ex773_ExecNextWaveEclipse13 : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex773_ExecNextWaveEclipse13")
	float ReserveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex773_ExecNextWaveEclipse13")
	bool bStartNotify;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex773_ExecNextWaveEclipse13")
	bool bNotifyJustInCase;
};
