#include "TresAnimNotify_PlayWeaponHitSE.h"

UTresAnimNotify_PlayWeaponHitSE::UTresAnimNotify_PlayWeaponHitSE() {
    this->m_SoundAliasID = ETresSoundAliasLabel_WeaponHit::NOTHING;
    this->m_SoundAliasUnit = ETresSoundAliasUnit::NOTHING;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_bFollow = false;
}

