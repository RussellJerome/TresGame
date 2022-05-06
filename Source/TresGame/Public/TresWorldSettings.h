// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEX_WorldSettings.h"
#include "TresGame.h"
#include "TresWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresWorldSettings : public ASQEX_WorldSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldSettings)
	TEnumAsByte<ETresWorldCode> m_WorldCode;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldSettings)
	TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldSettings)
	TAssetPtr<class USoundBase> m_BGMField;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldSettings)
	TAssetPtr<class USoundBase> m_BGMBattle;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	TArray<struct FTresAttractionFlowDrawingEntry> m_DrawingTable;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	bool m_AttractionFlowDrawingEnable;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	TArray<class UDataAsset*> m_Assets;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	TArray<class UTresWorldResidentActorClassAsset*>   m_AssetMapsOnlyForLevel;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	TArray<FName> m_LoadCommonAssetTags;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	TArray<FName> m_DiscardCommonAssetTags;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	class UTresPhysMatEffectAsset* m_PhysMatEffects;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresWorldSettings)
	TEnumAsByte<ETresEffectAreaCode> m_EffectAreaCode;
	
	UPROPERTY(EditAnywhere, Category = TresWorldSettings)
	class UDataTable* m_EffectBaseColorTable;
};
