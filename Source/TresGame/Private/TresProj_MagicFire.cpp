#include "TresProj_MagicFire.h"

ATresProj_MagicFire::ATresProj_MagicFire() {
    this->m_PutEffect = NULL;
    this->m_PutEffectLife = 0.00f;
    this->m_PutEffectLifePlus = 0.00f;
    this->m_PutDecalMaterial = NULL;
    this->m_PutDecalSize = 100.00f;
    this->m_PutDecalSizePlus = 50.00f;
    this->m_PutDecalLife = 3.00f;
    this->m_PutDecalFadeInTime = 0.12f;
    this->m_PutDecalFadeOutTime = 3.00f;
}

