#include "TresGumiShipGimmickMeteorTable.h"

FTresGumiShipGimmickMeteorTable::FTresGumiShipGimmickMeteorTable() {
    this->m_MeteoroHP = 0;
    this->m_pHoleVFX = NULL;
    this->m_pGuideVFX = NULL;
    this->m_pMeteoroVFX = NULL;
    this->m_pMuzzleVFX = NULL;
    this->m_pDeadVFX = NULL;
    this->m_fStartDispTimer = 0.00f;
    this->m_fEndDispTimer = 0.00f;
    this->m_pMuzzleTimer = 0.00f;
    this->m_fStartTimer = 0.00f;
    this->m_fScaleTimer = 0.00f;
    this->m_fGlowTimer = 0.00f;
    this->m_fInitalScale = 0.00f;
    this->m_fEffectScale = 0.00f;
}

