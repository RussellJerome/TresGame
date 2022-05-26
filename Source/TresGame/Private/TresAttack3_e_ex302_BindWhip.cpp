#include "TresAttack3_e_ex302_BindWhip.h"

UTresAttack3_e_ex302_BindWhip::UTresAttack3_e_ex302_BindWhip() {
    this->m_HitActorData = NULL;
    this->m_BindProjectileAsset = NULL;
    this->m_BindEndProjectileAsset = NULL;
    this->m_BindProjectileSpeed = 3000.00f;
    this->m_CanMoveRange = 500.00f;
    this->m_CanMoveRangeZ = 500.00f;
    this->m_AppearMinAngle = 45.00f;
    this->m_AppearMaxAngle = 60.00f;
    this->m_StartSpawnBindProjectileTime = 0.00f;
    this->m_StartSpawnSpawnWhipTime = 0.20f;
    this->m_BindLoopTime = 5.00f;
    this->m_LandEffectData = NULL;
    this->m_BeamEffectData = NULL;
    this->m_BindEffectData = NULL;
    this->m_HitActor = NULL;
    this->m_BindProjectile = NULL;
    this->m_BindEndProjectile = NULL;
    this->m_LandEffectCmp = NULL;
    this->m_BeamEffectCmp = NULL;
    this->m_BindEffectCmp = NULL;
}

