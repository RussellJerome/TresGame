#include "TresAttack3_e_ex308_PhantomBlitzBase.h"

UTresAttack3_e_ex308_PhantomBlitzBase::UTresAttack3_e_ex308_PhantomBlitzBase() {
    this->m_StartAnimData = NULL;
    this->m_ChangeAnimData = NULL;
    this->m_FinishAnimData = NULL;
    this->m_LightCoefficient = 0.50f;
    this->m_LightChangeStartTime = 1.00f;
    this->m_LightChangeEndTime = 1.00f;
    this->m_WeaponMoveSpeed = 4000.00f;
    this->m_TurnaroundWeaponMoveSpeed = 0.00f;
    this->m_WeaponHomingSpeed = 45.00f;
    this->m_WeaponRotationSpeed = 2000.00f;
    this->m_NumTurnaround = 4;
    this->m_StartTurnaroundDistance = 3500.00f;
    this->m_TurnaroundSpeed = 270.00f;
    this->m_QuickTurnaroundRate = 1.00f;
    this->m_StartQuickTurnaroundDistance = 500.00f;
    this->m_bIsEnableAttackHitIgnore = true;
    this->m_AttackCollisionIntervalTime = 1.00f;
    this->m_WeaponGroundEffect = NULL;
    this->m_WeaponGroundEffectSpawnDistance = 300.00f;
    this->m_AuraParticleSystem = NULL;
    this->m_WeaponAuraParticleSystem = NULL;
}

