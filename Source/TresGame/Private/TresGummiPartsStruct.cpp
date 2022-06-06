#include "TresGummiPartsStruct.h"

FTresGummiPartsStruct::FTresGummiPartsStruct() {
    this->m_nSizeX = 0;
    this->m_nSizeY = 0;
    this->m_nSizeZ = 0;
    this->m_nCost = 0;
    this->m_nHP = 0;
    this->m_nSpeed = 0;
    this->m_nPower = 0;
    this->m_nRoll = 0;
    this->m_nAttack = 0;
    this->m_nTurn = 0;
    this->m_isMaterial = false;
    this->m_isPattern = false;
    this->m_isSticker = false;
    this->m_isColorChange = false;
    this->m_isFlip = false;
    this->m_isAnim = false;
    this->m_isUVAnim = false;
    this->m_fPreviewScale = 0.00f;
}

