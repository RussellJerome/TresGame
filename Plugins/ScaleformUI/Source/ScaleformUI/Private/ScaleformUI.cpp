// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ScaleformUI.h"
#include "GFxTypeActions.h"

#define LOCTEXT_NAMESPACE "FScaleformUIModule"

void FScaleformUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FGFxTypeActions()));
}

void FScaleformUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 i = 0; i < CreatedAssetTypeActions.Num(); ++i) { AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[i].ToSharedRef()); }
	}
	CreatedAssetTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FScaleformUIModule, ScaleformUI)