#include "TresAnimNotifyState_PlayWeaponSwingSE.h"

UTresAnimNotifyState_PlayWeaponSwingSE::UTresAnimNotifyState_PlayWeaponSwingSE() {
    this->m_SoundAliasID = ETresSoundAliasLabel_WeaponSwing::NOTHING;
    this->m_SoundAliasUnit = ETresSoundAliasUnit::NOTHING;
    this->m_StartWaitTime = 0.00f;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_bFollow = false;
    this->m_FadeOutDuration = 0.00f;
}

