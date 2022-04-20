// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SQEX_KineDriverData_Factory.generated.h"

/**
 * 
 */
UCLASS()
class KINEDRIVERRT_API USQEX_KineDriverData_Factory : public UFactory
{
	GENERATED_BODY()

public:
	USQEX_KineDriverData_Factory();
	virtual uint32 GetMenuCategories() const override;
	FText GetDisplayName() const override { return FText::FromString(TEXT("KineDriver Data")); }
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Cntext, FFeedbackContext* Warn) override;
};
