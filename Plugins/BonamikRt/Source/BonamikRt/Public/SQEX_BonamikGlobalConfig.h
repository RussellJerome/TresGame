// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikGlobalConfig.generated.h"

/**
 * 
 */
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Bonamik Global Config"))
class BONAMIKRT_API USQEX_BonamikGlobalConfig : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bEnableTickComponent;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bDebugDrawBonamik;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bDebugDrawWind;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bEnableUpdate;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bMultiThreadUpdate;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bEnableSimulation;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bEnableUpdateOverlaps;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	float TimeStep;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	float ExpectedFrameRate;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	float MayaAnimationFrameRate;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	float MayaSimulationFrameRate;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	FVector Gravity;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	float WindSourceSpeedFactor;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bTickWindWhenPaused;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	TEnumAsByte<ESQEX_Bonamik_GlobalOutOfCamera> OutOfCamera;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bKBDEnable;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bKBDEnableInitializaiton;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	bool bKBDEnableCreationOfBonamikComponent;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	int32 SkipUpdateForActorType;
	
	UPROPERTY(config, EditAnywhere, Category = "SQEX_BonamikGlobalConfig")
	int32 SkipWaitForActorType;
};
