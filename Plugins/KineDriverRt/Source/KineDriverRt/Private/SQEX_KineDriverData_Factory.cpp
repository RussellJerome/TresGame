// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEX_KineDriverData_Factory.h"
#include "AssetTypeCategories.h"
#include "SQEX_KineDriverData.h"

USQEX_KineDriverData_Factory::USQEX_KineDriverData_Factory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEX_KineDriverData::StaticClass();
}
uint32 USQEX_KineDriverData_Factory::GetMenuCategories() const { return EAssetTypeCategories::Physics; }
UObject * USQEX_KineDriverData_Factory::FactoryCreateNew(UClass * InClass, UObject * InParent, FName InName, EObjectFlags flags, UObject * Cntext, FFeedbackContext * Warn)
{
	return NewObject<USQEX_KineDriverData>(InParent, InClass, InName, flags);
}
