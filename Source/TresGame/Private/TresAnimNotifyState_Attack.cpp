#include "TresAnimNotifyState_Attack.h"

UTresAnimNotifyState_Attack::UTresAnimNotifyState_Attack() {
    this->AttackInterval = 0.00f;
    this->m_bOverrideHitEffect = false;
    this->m_HitSEAsset = NULL;
    this->m_WeaponHitSEAliasID = ETresSoundAliasLabel_WeaponHit::NOTHING;
    this->m_bOverrideHitEffectColor = false;
    this->m_bOverrideHitEffectAlpha = false;
    this->m_bTakeOverHitList = false;
    this->m_bIgnoreComboCountUp = false;
    this->m_ComboCountUpParam = 0;
}

