// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SQEX_BonamikAsset_Factory.generated.h"

/**
 * 
 */
UCLASS()
class BONAMIKRT_API USQEX_BonamikAsset_Factory : public UFactory
{
	GENERATED_BODY()
	
public:
	USQEX_BonamikAsset_Factory();
	virtual uint32 GetMenuCategories() const override;
	FText GetDisplayName() const override { return FText::FromString(TEXT("Bonamik Asset")); }
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Cntext, FFeedbackContext* Warn) override;
};
