// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SQEX_KineDriver_GlobalConfig.generated.h"

/**
 * 
 */
UCLASS()
class KINEDRIVERRT_API USQEX_KineDriver_GlobalConfig : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_GlobalConfig")
	bool bMultiThreadUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_KineDriver_GlobalConfig")
	bool bEnableUpdateOverlaps;
};
