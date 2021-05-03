// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADBGMSlot.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADBGMSlot : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMSlot")
	ESQEXSEAD_BGMState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMSlot")
	struct FSQEXSEAD_BGMOptions DefaultOptions_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMSlot")
	class USQEXSEAD_BGM* BGM_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMSlot")
	class USQEXSEAD_BGM* PrevBGM_;
};
