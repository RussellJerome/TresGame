#include "TresAttack2_e_ex362_AirSonicImpact.h"

UTresAttack2_e_ex362_AirSonicImpact::UTresAttack2_e_ex362_AirSonicImpact() {
    this->m_WarpEQSQuery = NULL;
    this->m_ReflectedWarpEQSQuery = NULL;
    this->m_InitMoveSpeed = 2000.00f;
    this->m_LandingMoveSpeed = 300.00f;
    this->m_GroundCheckHigh = 30.00f;
    this->m_WarpOffsetZ = 50.00f;
    this->m_MoveTargetScale = 2.00f;
    this->m_RotUpdateRate = 0.10f;
    this->m_LandMoveScale = 1.00f;
    this->m_AttackCollisionIntervalTime = 0.00f;
    this->m_AtkHitSEAsset = NULL;
    this->m_ChaseDist = 0.00f;
    this->m_RotRate = 0.00f;
    this->m_HomingEndDist = 300.00f;
    this->m_HomingAfterWarpStartTime = 0.60f;
    this->m_HitAfterWarpStartTime = 0.40f;
    this->m_HitAfterPitch = -20.00f;
    this->m_IsHitWarp = false;
}

