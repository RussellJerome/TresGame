#include "TresAttack1_e_bx903_Punch.h"

UTresAttack1_e_bx903_Punch::UTresAttack1_e_bx903_Punch() {
    this->m_ChangeRotateDigRate = 0.00f;
    this->m_TargetRotateTime = 0.00f;
    this->m_TargetRotateDigRate = 0.00f;
    this->m_TargetRotateMoveSpeed = 0.00f;
    this->m_TargetRotateMoveZRate = 0.00f;
    this->m_InitialSpeed = 0.00f;
    this->m_AdditionalSpeed = 0.00f;
    this->m_PunchPitchDig = 0.00f;
    this->m_AttackExplosionTime = 0.50f;
    this->m_ImpactLeaveTime = 0.00f;
    this->m_LeaveEndTime = 0.00f;
    this->m_GatherTime = 0.00f;
    this->m_GatherMoveSpeed = 0.00f;
    this->m_ExplosionProjectile = NULL;
    this->m_CoreMoveStartTime = 0.00f;
    this->m_CoreMoveTime = 0.00f;
    this->m_CoreMoveEffectParticle = NULL;
    this->m_CoreMoveSpeed = 500.00f;
    this->m_CoreMoveEndDist = 50.00f;
    this->m_CoreEffectParticle = NULL;
    this->m_CoreUpEndDist = 200.00f;
    this->m_CoreUpSpeed = 200.00f;
    this->m_CoreAttackTime = 5.00f;
    this->m_AbsorbSEAsset = NULL;
}

