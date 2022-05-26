#include "TresEnemy_e_ex367_AscensionPillarProjectileBase.h"

ATresEnemy_e_ex367_AscensionPillarProjectileBase::ATresEnemy_e_ex367_AscensionPillarProjectileBase() {
    this->m_DistanceMax = 2000.00f;
    this->m_IsDestroyBattleArea = false;
    this->m_DistanceSpeed = 10.00f;
    this->m_DistanceAddSpeed = 1000.00f;
    this->m_DistanceSpeedMax = 500.00f;
    this->m_IsRotation = true;
    this->m_RotationSpeed = 0.00f;
    this->m_RotationAddSpeed = 1000.00f;
    this->m_RotationMaxSpeed = 100.00f;
    this->m_NumberEffData = NULL;
    this->m_LightParticleData = NULL;
    this->m_PillarDelayTime = 0.50f;
    this->m_PillarStraightSpeed = 3000.00f;
    this->m_SpawnTailIntervalTime = 0.00f;
    this->m_TailAttackProjData = NULL;
    this->m_NumberEff = NULL;
    this->m_LightParticle = NULL;
}

