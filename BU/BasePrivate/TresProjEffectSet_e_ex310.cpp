#include "TresProjEffectSet_e_ex310.h"

FTresProjEffectSet_e_ex310::FTresProjEffectSet_e_ex310() {
    this->m_AppearEffect = NULL;
    this->m_AppearVisibleDelayTime = 0.00f;
    this->m_bIsEnableAppearScaleAnim = false;
    this->m_bIsDelayAppearScaleAnim = false;
    this->m_AppearScaleAnimTime = 0.00f;
    this->m_AppearScaleAnimStartScale = 0.00f;
    this->m_bIsEnableAppearDitherAnim = false;
    this->m_bIsDelayAppearDitherAnim = false;
    this->m_AppearDitherAnimTime = 0.00f;
    this->m_AppearDitherAnimStartValue = 0.00f;
    this->m_DisappearEffect = NULL;
    this->m_DisappearVisibleDelayTime = 0.00f;
    this->m_bIsEnableDisappearScaleAnim = false;
    this->m_DisappearScaleAnimTime = 0.00f;
    this->m_DisappearScaleAnimEndScale = 0.00f;
    this->m_bIsEnableDisappearDitherAnim = false;
    this->m_DisappearDitherAnimTime = 0.00f;
    this->m_DisappearDitherAnimEndValue = 0.00f;
    this->m_bIsNotifyOnlyVisible = false;
    this->m_pEffect = NULL;
    this->MyMesh = NULL;
}

