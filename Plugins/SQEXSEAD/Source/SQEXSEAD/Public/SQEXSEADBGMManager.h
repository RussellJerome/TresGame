// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADBGMManager.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADBGMManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
	TArray<class USQEXSEADBGMSlot*> Slots_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
	TArray<class USQEXSEADBGMSlotController*> Controllers_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
	class USQEXSEADBGMSlot* PlayingSlot_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMManager")
	TArray<struct FSQEXSEAD_BGMSlotSetting> SlotSettings_;
};
