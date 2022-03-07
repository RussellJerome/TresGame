// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresGummiEditorDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGummiEditorDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UStaticMesh* m_pGummiShipStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pFirstMapJumpData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pFirstMapStartData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pRankDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiMissionDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiTreasureData1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiTreasureData2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiTreasureData3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummieceData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pEdgeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pCurveGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pPipeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pAeroGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pShootingGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pLaserGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pStrikeGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pEngineGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pWingGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pWheelGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pCockpitGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pShieldGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pOptionGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pCharacterGummiDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiGraphicDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UTresGummiShipPlanDataTableSet* m_pGummiPlanDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UTresGummiShipPlanDataTableSet* m_pGummiSpecialPlanDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UTresTinyShipPlanDataTableSet* m_pTinyPlanDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UTresTinyShipPlanDataTableSet* m_pTinySpecialPlanDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiPlanSetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiMaterialDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiPatternDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UMaterialInterface* m_pGummiStickerMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiStickerTextureDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiNumberStickerDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiSymbolStickerDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiDesignStickerDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pGummiCharacterStickerDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pNameEntryTextDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UTextureRenderTarget2D* m_pGummiPartsRenderTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UObject* m_pPosProMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pAbilityParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	int m_nShellGummiHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	int m_nLShellGummiHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	struct FTresGumiShipElementResistance m_ShieldGummiAttribute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	struct FTresGumiShipElementResistance m_LargeShieldGummiAttribute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiEditorDataTableSet")
	class UDataTable* m_pEnemyTerritoryParameterDataTable;
};
