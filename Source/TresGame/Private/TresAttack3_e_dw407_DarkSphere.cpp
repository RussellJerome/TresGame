#include "TresAttack3_e_dw407_DarkSphere.h"

UTresAttack3_e_dw407_DarkSphere::UTresAttack3_e_dw407_DarkSphere() {
    this->m_ShockWaveLoopTime = 2.00f;
    this->m_ShakeCameraClass = NULL;
    this->m_ForceFeedbackClass = NULL;
    this->m_DarkShpereProjectileAsset = NULL;
    this->m_DarkSphereLoopTime = 2.00f;
    this->m_DarkSphereBurstEffData = NULL;
    this->m_InitialSpawnProjectileTime = 1.00f;
    this->m_ProjectileSpeed = 600.00f;
    this->m_SpawnProjectileTime = 10.00f;
    this->m_SpawnProjectileInterval = 1.00f;
    this->m_WideSpawnProjectileDistace = 1000.00f;
    this->m_bIsNarrowTargetDarkSide = true;
    this->m_SpawnProjectileNarrowSameTimeNum = 3;
    this->m_SpawnProjectileNarrowMinRadius = 100.00f;
    this->m_SpawnProjectileNarrowMaxRadius = 300.00f;
    this->m_bIsWideTargetDarkSide = true;
    this->m_SpawnProjectileWideSameTimeNum = 5;
    this->m_SpawnProjectileWideMinRadius = 500.00f;
    this->m_SpawnProjectileWideMaxRadius = 1000.00f;
    this->m_SpawnProjectileAimTargetTimingTime = 1.00f;
    this->m_SpawnProjectileAimTargetRadius = 400.00f;
    this->m_SpawnProjectileMinHeight = 1500.00f;
    this->m_SpawnProjectileMaxHeight = 2000.00f;
    this->m_CacheSpawnLocationTime = 1.00f;
    this->m_ProjectileDistance = 350.00f;
    this->m_pDarkShpereProjectile = NULL;
}

