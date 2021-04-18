// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "BonamikRt_StructsAndEnums.h"
#include "TresBonamikEmissiveVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresBonamikEmissiveVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	TArray<class USkinnedMeshComponent*> m_ReferencedComponets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	TArray<FString> m_Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	TEnumAsByte<ESQEX_Bonamik_EmissiveDirection> m_DirectionSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	FVector m_DirectionVec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	float m_BaseStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	float m_WaveAmplitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBonamikEmissiveVolume")
	float m_WavePeriod;
};
