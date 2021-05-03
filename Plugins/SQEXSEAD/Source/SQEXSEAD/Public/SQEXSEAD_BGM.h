// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEAD_BGM.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEAD_BGM : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEAD_BGM")
	class USQEXSEADBGMSlot* OwnerSlot_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEAD_BGM")
	class USQEXSEADSound* Sound_;
};
