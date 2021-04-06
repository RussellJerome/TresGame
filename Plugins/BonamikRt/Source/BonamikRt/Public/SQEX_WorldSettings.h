// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_WorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API ASQEX_WorldSettings : public AWorldSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = SQEX_WorldSettings)
		struct FSQEX_BonamikPresetWindSettings m_BonamikPresetWindSettings;
	
};
