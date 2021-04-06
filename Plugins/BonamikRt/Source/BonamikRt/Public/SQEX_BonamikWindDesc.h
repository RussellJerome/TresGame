// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BonamikRt_StructsAndEnums.h"
#include "SQEX_BonamikWindDesc.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BONAMIKRT_API USQEX_BonamikWindDesc : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TEnumAsByte<ESQEX_Bonamik_WindType> m_WindType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_WindForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_RandomRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_RandomTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_WaveMagnitude;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_WaveFrequency;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_WaveMagOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_WaveFreqOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_WaveTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_CustomWaveScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector m_CustomWaveOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_CustomWaveTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float> m_DataX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float> m_DataY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float> m_DataZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_PointStrength;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_BlastRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_BlastSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_PointRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float m_PeakInRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	int m_StartFrame;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	int m_LoopNum;
};
