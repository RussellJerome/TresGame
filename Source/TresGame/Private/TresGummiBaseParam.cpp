#include "TresGummiBaseParam.h"

FTresGummiBaseParam::FTresGummiBaseParam() {
    this->m_nCost = 0;
    this->m_nHP = 0;
    this->m_nSpeed = 0;
    this->m_nPower = 0;
    this->m_nRoll = 0;
    this->m_nAttack = 0;
    this->m_nTurn = 0;
    this->m_CT1_PaletteTexture = NULL;
    this->m_CT2_PaletteNum = 0.00f;
    this->m_CT3_MaskTexture_Base = NULL;
    this->m_CT3_MaskTexture_Deco = NULL;
    this->m_CT4_MaskTexUVIndex = 0.00f;
    this->m_CT5_MaskTexUVTiling = 0.00f;
    this->m_CT_PaletteUse = 0.00f;
    this->m_isFlip = false;
    this->m_isMaterial = false;
    this->m_isPattern = false;
    this->m_isSticker = false;
    this->m_isColorChange = false;
    this->m_isAnim = false;
    this->m_isUVAnim = false;
    this->m_fPreviewScale = 0.00f;
}

