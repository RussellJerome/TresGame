#include "TresGummiEditorDataTableSet.h"

UTresGummiEditorDataTableSet::UTresGummiEditorDataTableSet() {
    this->m_pGummiShipStaticMesh = NULL;
    this->m_pFirstMapJumpData = NULL;
    this->m_pFirstMapStartData = NULL;
    this->m_pRankDataTable = NULL;
    this->m_pGummiMissionDataTable = NULL;
    this->m_pGummiTreasureData1 = NULL;
    this->m_pGummiTreasureData2 = NULL;
    this->m_pGummiTreasureData3 = NULL;
    this->m_pGummieceData = NULL;
    this->m_pEdgeGummiDataTable = NULL;
    this->m_pCurveGummiDataTable = NULL;
    this->m_pPipeGummiDataTable = NULL;
    this->m_pAeroGummiDataTable = NULL;
    this->m_pShootingGummiDataTable = NULL;
    this->m_pLaserGummiDataTable = NULL;
    this->m_pStrikeGummiDataTable = NULL;
    this->m_pEngineGummiDataTable = NULL;
    this->m_pWingGummiDataTable = NULL;
    this->m_pWheelGummiDataTable = NULL;
    this->m_pCockpitGummiDataTable = NULL;
    this->m_pShieldGummiDataTable = NULL;
    this->m_pOptionGummiDataTable = NULL;
    this->m_pCharacterGummiDataTable = NULL;
    this->m_pGummiGraphicDataTable = NULL;
    this->m_pGummiPlanDataAsset = NULL;
    this->m_pGummiSpecialPlanDataAsset = NULL;
    this->m_pTinyPlanDataAsset = NULL;
    this->m_pTinySpecialPlanDataAsset = NULL;
    this->m_pGummiPlanSetData = NULL;
    this->m_pGummiMaterialDataTable = NULL;
    this->m_pGummiPatternDataTable = NULL;
    this->m_pGummiStickerMaterial = NULL;
    this->m_pGummiStickerTextureDataTable = NULL;
    this->m_pGummiNumberStickerDataTable = NULL;
    this->m_pGummiSymbolStickerDataTable = NULL;
    this->m_pGummiDesignStickerDataTable = NULL;
    this->m_pGummiCharacterStickerDataTable = NULL;
    this->m_pNameEntryTextDataTable = NULL;
    this->m_pGummiPartsRenderTargetTexture = NULL;
    this->m_pPosProMaterial = NULL;
    this->m_pAbilityParameterDataTable = NULL;
    this->m_nShellGummiHp = 20;
    this->m_nLShellGummiHp = 50;
    this->m_pEnemyTerritoryParameterDataTable = NULL;
}

