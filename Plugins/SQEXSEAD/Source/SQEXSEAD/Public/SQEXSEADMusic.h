// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEXSEADSound.h"
#include "SQEXSEADMusic.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADMusic : public USQEXSEADSound
{
	GENERATED_BODY()

	/*virtual int32 GeneratePCMData(uint8* PCMData, const int32 SamplesNeeded) override
	{
		UE_LOG(LogTemp, Warning, TEXT("Samples Needed: %s"), SamplesNeeded);
		//int32 BytesGenerated = Super::GeneratePCMData(PCMData, SamplesNeeded);
		return 0;
	};*/
};
