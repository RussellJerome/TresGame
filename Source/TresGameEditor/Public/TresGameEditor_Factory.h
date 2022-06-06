// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeCategories.h"
#include "Factories/Factory.h"
#include "EditorReimportHandler.h"
#include "TresGameEditor.h"
#include "TresGameEditor_Factory.generated.h"

UCLASS()
class TRESGAMEEDITOR_API UTresGameEditor_Factory : public UFactory
{
	GENERATED_BODY()
	
	UTresGameEditor_Factory();
/*protected:
	virtual bool IsMacroFactory() const { return false; }
public:
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;*/
};



