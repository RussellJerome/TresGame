// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SQEXSEADSoundFactory.generated.h"

/**
 * 
 */
UCLASS()
class USQEXSEADSoundFactory : public UFactory
{
	GENERATED_BODY()

public:
	USQEXSEADSoundFactory();
	virtual uint32 GetMenuCategories() const override;
	FText GetDisplayName() const override { return FText::FromString(TEXT("SQEXSEADSound")); }
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Cntext, FFeedbackContext* Warn) override;
};