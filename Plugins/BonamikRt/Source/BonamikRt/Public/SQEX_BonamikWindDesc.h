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
	TEnumAsByte<ESQEX_Bonamik_WindType>                m_WindType;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_WindForce;                                              // 0x004C(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_RandomRange;                                            // 0x0058(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_RandomTime;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_WaveMagnitude;                                          // 0x0068(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_WaveFrequency;                                          // 0x0074(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_WaveMagOffset;                                          // 0x0080(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_WaveFreqOffset;                                         // 0x008C(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_WaveTime;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_CustomWaveScale;                                        // 0x009C(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	FVector                                     m_CustomWaveOffset;                                       // 0x00A8(0x000C) (IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_CustomWaveTime;                                         // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float>                                      m_DataX;                                                  // 0x00B8(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float>                                      m_DataY;                                                  // 0x00C8(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	TArray<float>                                      m_DataZ;                                                  // 0x00D8(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_PointStrength;                                          // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_BlastRange;                                             // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_BlastSpeed;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_PointRadius;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	float                                              m_PeakInRange;                                            // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	int                                                m_StartFrame;                                             // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindDesc")
	int                                                m_LoopNum;                                                // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
};
