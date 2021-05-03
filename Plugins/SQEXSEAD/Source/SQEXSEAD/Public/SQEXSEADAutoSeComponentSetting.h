// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAutoSeComponentSetting.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeComponentSetting : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponentSetting")
	struct FSQEXSEADAutoSeComponentInitParams InitParams;
};
