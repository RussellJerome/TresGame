#include "TresAnimNotify_PlayWeaponSwingSE.h"

UTresAnimNotify_PlayWeaponSwingSE::UTresAnimNotify_PlayWeaponSwingSE() {
    this->m_SoundAliasID = ETresSoundAliasLabel_WeaponSwing::NOTHING;
    this->m_SoundAliasUnit = ETresSoundAliasUnit::NOTHING;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_bFollow = false;
}

