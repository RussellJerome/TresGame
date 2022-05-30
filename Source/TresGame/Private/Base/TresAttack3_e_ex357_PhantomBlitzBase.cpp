#include "TresAttack3_e_ex357_PhantomBlitzBase.h"

UTresAttack3_e_ex357_PhantomBlitzBase::UTresAttack3_e_ex357_PhantomBlitzBase() {
    this->m_bEnableStartPlayVoice2D = false;
    this->m_bEnableFinishPlayVoice2D = false;
    this->m_MaxAttackHitNum = 1;
    this->m_QuickTurnaroundAfterMaxAttackHitNum = 1;
    this->m_StartAnimYawHomingSpeed = 360.00f;
    this->m_StartAnimPitchHomingSpeed = 0.00f;
    this->m_StartAnimPitchHomingLimitAngle = 0.00f;
    this->m_QuickTurnAnimYawHomingSpeed = 360.00f;
    this->m_QuickTurnAnimPitchHomingSpeed = 360.00f;
    this->m_QuickTurnAnimPitchHomingLimitAngle = 75.00f;
    this->m_WeaponMoveSpeed[0] = 4000.00f;
    this->m_WeaponMoveSpeed[1] = 4000.00f;
    this->m_QuickTurnaroundAfterWeaponMoveSpeed[0] = 4000.00f;
    this->m_QuickTurnaroundAfterWeaponMoveSpeed[1] = 4000.00f;
    this->m_TurnaroundWeaponMoveSpeed = 0.00f;
    this->m_WeaponDirectionInterpTime = 0.50f;
    this->m_NumTurnaround = 4;
    this->m_bIsTurnaroundCentrTarget = false;
    this->m_StartTurnaroundDistance = 3500.00f;
    this->m_StartTurnaroundOvertakeDistance = 500.00f;
    this->m_TurnaroundSpeed = 270.00f;
    this->m_StartQuickTurnaroundOvertakeDistance = 1000.00f;
    this->m_AttackCollisionIntervalTime = 1.00f;
    this->m_bEnableQuickTurnaroundAfterGuardBreakEffect = true;
    this->m_WeaponGroundEffect = NULL;
    this->m_WeaponGroundEffectSpawnDistance = 300.00f;
}

