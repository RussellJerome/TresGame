#include "TresPhysMatEffectAssetUnit.h"

FTresPhysMatEffectAssetUnit::FTresPhysMatEffectAssetUnit() {
    this->m_bEnableInnerWater = false;
    this->m_NmlSpeedParam = 0.00f;
    this->m_NmlEffect = NULL;
    this->m_HighSpeedParam = 0.00f;
    this->m_HighEffect = NULL;
    this->m_StillEffect = NULL;
    this->m_EnterEffect = NULL;
    this->m_LeaveEffect = NULL;
}

