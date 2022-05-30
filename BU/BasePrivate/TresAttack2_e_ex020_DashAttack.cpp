#include "TresAttack2_e_ex020_DashAttack.h"

UTresAttack2_e_ex020_DashAttack::UTresAttack2_e_ex020_DashAttack() {
    this->AttackInterval = 0.00f;
    this->m_bOverrideHitEffect = false;
    this->m_HitSEAsset = NULL;
    this->m_WeaponHitSEAliasID = ETresSoundAliasLabel_WeaponHit::NOTHING;
    this->m_bOverrideHitEffectColor = false;
    this->m_bOverrideHitEffectAlpha = false;
    this->m_bTakeOverHitList = false;
    this->m_WaitTimeAnimData = NULL;
    this->m_WaitTime = 1.00f;
}

