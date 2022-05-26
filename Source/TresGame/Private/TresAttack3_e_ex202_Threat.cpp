#include "TresAttack3_e_ex202_Threat.h"

UTresAttack3_e_ex202_Threat::UTresAttack3_e_ex202_Threat() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_LoopTime = 3.00f;
    this->m_TurnSpeed = 120.00f;
    this->m_MaxTurnAngle = 90.00f;
    this->m_ShakingAngle = 30.00f;
    this->m_AttackStartTime = 0.00f;
    this->m_AttackInterval = 0.00f;
    this->m_bOverrideHitEffect = false;
    this->m_HitSEAsset = NULL;
    this->m_WeaponHitSEAliasID = ETresSoundAliasLabel_WeaponHit::NOTHING;
    this->m_bOverrideHitEffectColor = false;
    this->m_bOverrideHitEffectAlpha = false;
    this->m_bTakeOverHitList = false;
}

