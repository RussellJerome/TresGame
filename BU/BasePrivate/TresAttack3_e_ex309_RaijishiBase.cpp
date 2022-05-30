#include "TresAttack3_e_ex309_RaijishiBase.h"

UTresAttack3_e_ex309_RaijishiBase::UTresAttack3_e_ex309_RaijishiBase() {
    this->m_StartAnimData = NULL;
    this->m_AttackAnimData = NULL;
    this->m_FinishAnimData = NULL;
    this->m_AppearDistance = 0.00f;
    this->m_AppearMaxAngle = 0.00f;
    this->m_ScratchMoveSpeed = 0.00f;
    this->m_ProjectileSignEffect = NULL;
    this->m_ProjectileSignEffectSpawnRandomTime = 0.50f;
    this->m_ProjectileSignEffectTime = 0.00f;
    this->m_ProjectileClass = NULL;
    this->m_NumSpawnProjectile = 0;
    this->m_MinIntervalDistance = 300.00f;
    this->m_AuraParticleSystem = NULL;
    this->m_WarpInParticleSystem = NULL;
    this->m_ThunderParticleSystem = NULL;
    this->m_ThunderEffectNumTurn = 0;
    this->m_ThunderEffectMoveSpeed = 0.00f;
    this->m_ThunderEffectShakeWidth = 0.00f;
    this->m_ThunderEffectColorChangeInterpTime = 0.15f;
}

