#include "TresEnemy_e_ex781_BeamProjectile.h"

ATresEnemy_e_ex781_BeamProjectile::ATresEnemy_e_ex781_BeamProjectile() {
    this->m_ExtendSpeed = 0.00f;
    this->m_MaxDistance = 0.00f;
    this->m_StartWaitTime = 0.00f;
    this->m_StartPitchOffset = 0.00f;
    this->m_PitchAddSpeed = 0.00f;
    this->m_PitchSpeedMax = 10.00f;
    this->m_PitchMax = 0.00f;
    this->m_BGHitParticleData = NULL;
    this->m_ChaseTarget = false;
    this->m_ChaseTargetRate = 0.00f;
    this->m_MoveBGHitEffect = false;
    this->m_BGHitParticle = NULL;
    this->m_Target = NULL;
    this->m_MyParent = NULL;
}

