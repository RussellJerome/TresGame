// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADSoundFactory.h"
#include "AssetTypeCategories.h"
#include "SQEXSEADSound.h"

USQEXSEADSoundFactory::USQEXSEADSoundFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEXSEADSound::StaticClass();
}
uint32 USQEXSEADSoundFactory::GetMenuCategories() const { return EAssetTypeCategories::Sounds; }
UObject * USQEXSEADSoundFactory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEXSEADSound>(InParent, InClass, InName, flags);
}