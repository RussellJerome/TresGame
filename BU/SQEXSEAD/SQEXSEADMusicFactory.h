// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SQEXSEADMusicFactory.generated.h"

/**
 * 
 */
UCLASS()
class USQEXSEADMusicFactory : public UFactory
{
	GENERATED_BODY()

public:
	USQEXSEADMusicFactory();
	virtual uint32 GetMenuCategories() const override;
	FText GetDisplayName() const override { return FText::FromString(TEXT("SQEXSEADMusic")); }
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Cntext, FFeedbackContext* Warn) override;
};
