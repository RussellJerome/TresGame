#include "TresGummiMaterialDataTable.h"

FTresGummiMaterialDataTable::FTresGummiMaterialDataTable() {
    this->m_MaterialInstance_Base = NULL;
    this->m_MaterialInstance_Deco = NULL;
    this->m_CT1_PaletteTexture = NULL;
    this->m_CT2_PaletteNum = 0.00f;
    this->m_CT3_MaskTexture_Base = NULL;
    this->m_CT3_MaskTexture_Deco = NULL;
    this->m_CT4_MaskTexUVIndex = 0.00f;
    this->m_CT5_MaskTexUVTiling = 0.00f;
    this->m_CT_PaletteUse = 0.00f;
    this->m_isPattern = false;
    this->m_isSticker = false;
    this->m_isColorChange = false;
}

