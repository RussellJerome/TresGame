// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEX_BonamikAsset_Factory.h"
#include "AssetTypeCategories.h"
#include "SQEX_BonamikAsset.h"

USQEX_BonamikAsset_Factory::USQEX_BonamikAsset_Factory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEX_BonamikAsset::StaticClass();
}
uint32 USQEX_BonamikAsset_Factory::GetMenuCategories() const { return EAssetTypeCategories::Physics; }
UObject * USQEX_BonamikAsset_Factory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEX_BonamikAsset>(InParent, InClass, InName, flags);
}
