// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADSoundReferenceEnumSet.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADSoundReferenceEnumSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSoundReferenceEnumSet")
	TArray<struct FSQEXSEADSoundReference> References;
};
