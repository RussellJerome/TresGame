#include "TresAttack2_e_ex302_MaliceWhip.h"

UTresAttack2_e_ex302_MaliceWhip::UTresAttack2_e_ex302_MaliceWhip() {
    this->m_SlowEndKind = ETresEnemyEx302SlowEndKind::LastBlow_EndSlow;
    this->m_NegativeReversalEffectData = NULL;
    this->m_ChangeLastAttackHitNum = 10;
    this->m_SmallContinuousProjectileClass = NULL;
    this->m_SlowRateStartTime = 0.00f;
    this->m_SlowRate = 0.10f;
    this->m_SlowStartTime = 0.20f;
    this->m_SmallContinuousStartTime = 0.40f;
    this->m_AnnihilationStartVoice = NULL;
    this->m_AnnihilationHitVoice = NULL;
    this->m_StartVoice = NULL;
    this->m_HitVoice = NULL;
    this->m_NegativeReversalEffectCmp = NULL;
    this->m_MaliceWhipContinuousProjectile = NULL;
}

