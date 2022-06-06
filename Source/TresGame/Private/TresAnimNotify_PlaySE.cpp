#include "TresAnimNotify_PlaySE.h"

UTresAnimNotify_PlaySE::UTresAnimNotify_PlaySE() {
    this->m_SoundAsset = NULL;
    this->m_SoundAliasID = SEAL_NOTHING;
    this->m_SoundAliasUnit = ETresSoundAliasUnitID::SEAU_NOTHING;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_bFollow = false;
}

