#include "TresAttack2_e_ex021_ShotgunFire.h"

UTresAttack2_e_ex021_ShotgunFire::UTresAttack2_e_ex021_ShotgunFire() {
    this->m_bAimBBPearl = false;
    this->m_BoneName = TEXT("kh_sk");
    this->m_OffsetZ = 0.00f;
    this->m_SpawnProjectileNum = 15;
    this->m_AimSpawnProjectileNum = 5;
    this->m_SpawnProjectileInterval = 0.10f;
    this->m_SpawnProjectileLimitYaw = 20.00f;
    this->m_SpawnProjectileLimitPitch = 20.00f;
    this->m_TimeUntilIdling = 0.30f;
    this->m_ProjectileSpeed = 2000.00f;
    this->m_HomingOffsetDistMin = 0.00f;
    this->m_HomingOffsetDistMax = 3000.00f;
}

