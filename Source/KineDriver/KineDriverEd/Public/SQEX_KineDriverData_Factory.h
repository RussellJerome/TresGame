// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "EditorReimportHandler.h"
#include "SQEX_KineDriverData_Factory.generated.h"

/**
 * 
 */
UCLASS()
class KINEDRIVERED_API USQEX_KineDriverData_Factory : public UFactory, public FReimportHandler
{
	GENERATED_BODY()
	
	USQEX_KineDriverData_Factory();
	virtual uint32 GetMenuCategories() const override;
	FText GetDisplayName() const override { return FText::FromString(TEXT("KineDriver Data")); }
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Cntext, FFeedbackContext* Warn) override;
	virtual UObject* FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames) override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;
	virtual EReimportResult::Type Reimport(UObject* Obj) override;
};
