#include "TresAttractionPawnVikingShip.h"

ATresAttractionPawnVikingShip::ATresAttractionPawnVikingShip() {
    this->m_bEnableDecal = false;
    this->m_DecalMaterial = NULL;
    this->m_DecalSize = 640.00f;
    this->m_DecalZSize = 128.00f;
    this->m_DecalLifeSpan = 60.00f;
    this->m_DecalFadeinTime = 0.50f;
    this->m_DecalFadeoutTime = 1.00f;
    this->m_ProjSplash = NULL;
    this->m_fIdlePitchLimit = 30.00f;
    this->m_fIdlePowerLimit = 90.00f;
    this->m_fIdleAccelLimit = 90.00f;
    this->m_fIdleBreakLimit = 180.00f;
    this->m_fAttackPitchLimit = 60.00f;
    this->m_fAttackPowerLimit = 180.00f;
    this->m_fAttackAccelLimit = 180.00f;
    this->m_fAttackBreakLimit = 360.00f;
    this->m_Param_ScoreDamage = 10;
    this->m_Param_ScoreKill = 50;
    this->m_fYawPowerAdd = 10.00f;
    this->m_pSpawnDecal = NULL;
    this->m_pCamera = NULL;
}

