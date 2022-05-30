#include "TresAttack1_e_dw407b_Roar.h"

UTresAttack1_e_dw407b_Roar::UTresAttack1_e_dw407b_Roar() {
    this->m_InitialSpawnProjectileTime = 0.50f;
    this->m_FarSpawnProjectileDistace = 500.00f;
    this->m_NearProjectileSpeed = 600.00f;
    this->m_NearSpawnProjectileTime = 10.00f;
    this->m_NearSpawnProjectileInterval = 1.00f;
    this->m_NearSpawnProjectileSameTimeNum = 3;
    this->m_bIsNearTargetDarkSide = true;
    this->m_NearSpawnProjectileMinRadius = 300.00f;
    this->m_NearSpawnProjectileMaxRadius = 600.00f;
    this->m_NearSpawnProjectileAimTargetRadius = 300.00f;
    this->m_NearSpawnProjectileAimTargetTimingTime = 1.00f;
    this->m_NearSpawnProjectileMinHeight = 1500.00f;
    this->m_NearSpawnProjectileMaxHeight = 2000.00f;
    this->m_FarProjectileSpeed = 600.00f;
    this->m_FarSpawnProjectileTime = 10.00f;
    this->m_FarSpawnProjectileInterval = 1.00f;
    this->m_FarSpawnProjectileAimTargetDirectionTimingTime = 1.00f;
    this->m_FarSpawnProjectileMinHeight = 1500.00f;
    this->m_FarSpawnProjectileMaxHeight = 2000.00f;
    this->m_CacheSpawnLocationTime = 1.00f;
    this->m_ProjectileDistance = 450.00f;
}

