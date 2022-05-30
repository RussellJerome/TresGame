#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipElementResistance.h"
#include "TresGummiEditorDataTableSet.generated.h"

class UDataTable;
class UObject;
class UTresGummiShipPlanDataTableSet;
class UStaticMesh;
class UMaterialInterface;
class UTresTinyShipPlanDataTableSet;
class UTextureRenderTarget2D;

UCLASS()
class UTresGummiEditorDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* m_pGummiShipStaticMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pFirstMapJumpData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pFirstMapStartData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pRankDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiMissionDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiTreasureData1;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiTreasureData2;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiTreasureData3;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummieceData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pEdgeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pCurveGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pPipeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pAeroGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pShootingGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pLaserGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pStrikeGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pEngineGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pWingGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pWheelGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pCockpitGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pShieldGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pOptionGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pCharacterGummiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiGraphicDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGummiShipPlanDataTableSet* m_pGummiPlanDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGummiShipPlanDataTableSet* m_pGummiSpecialPlanDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresTinyShipPlanDataTableSet* m_pTinyPlanDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTresTinyShipPlanDataTableSet* m_pTinySpecialPlanDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiPlanSetData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiMaterialDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiPatternDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_pGummiStickerMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiStickerTextureDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiNumberStickerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiSymbolStickerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiDesignStickerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGummiCharacterStickerDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pNameEntryTextDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTextureRenderTarget2D* m_pGummiPartsRenderTargetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UObject* m_pPosProMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pAbilityParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nShellGummiHp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nLShellGummiHp;
    
    UPROPERTY(EditAnywhere)
    FTresGumiShipElementResistance m_ShieldGummiAttribute;
    
    UPROPERTY(EditAnywhere)
    FTresGumiShipElementResistance m_LargeShieldGummiAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pEnemyTerritoryParameterDataTable;
    
public:
    UTresGummiEditorDataTableSet();
};

