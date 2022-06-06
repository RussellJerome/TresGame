#include "TresAttack17_e_ex781_IllegalMagicFire.h"

UTresAttack17_e_ex781_IllegalMagicFire::UTresAttack17_e_ex781_IllegalMagicFire() {
    this->m_ToTargetSpeed = 4000.00f;
    this->m_MoveStartWaitTime = 0.40f;
    this->m_IsWarpOut = true;
    this->m_AttackUpDataTime = 0.30f;
    this->m_HomingEndDist = 300.00f;
    this->m_RotRate = 0.30f;
    this->m_EndWarpDist = 200.00f;
    this->m_UseStartMotion = false;
    this->m_BulletProjectile = NULL;
    this->m_BulletPitch = 0.00f;
    this->m_BulletRandPitch = 0.00f;
    this->m_BulletYaw = 0.00f;
    this->m_BulletShotNum = 0;
    this->m_BulletIntervalTime = 0.00f;
    this->m_BulletCenterDist = 0.00f;
    this->m_WarpEQSQuery = NULL;
}

