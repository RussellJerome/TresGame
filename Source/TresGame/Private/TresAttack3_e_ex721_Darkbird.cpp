#include "TresAttack3_e_ex721_Darkbird.h"

UTresAttack3_e_ex721_Darkbird::UTresAttack3_e_ex721_Darkbird() {
    this->m_bIsNearAttackDef = false;
    this->m_GatherMinRadius = 500.00f;
    this->m_GatherMaxRadius = 700.00f;
    this->m_GatherMinHeight = -300.00f;
    this->m_GatherMaxHeight = 300.00f;
    this->m_GatherBoneName = TEXT("B_headleaf2");
    this->m_GatherOffsetHeight = 800.00f;
    this->m_DarkBirdAnimData = NULL;
    this->m_Projectile = NULL;
    this->m_ShotNum = 25;
    this->m_AimNum = 5;
    this->m_AllGatherDashTime = 3.00f;
    this->m_RotateSpeed = 2000.00f;
    this->m_RotateAccelSpeed = 500.00f;
    this->m_RotateMaxSpeed = 2500.00f;
    this->m_ProjectileAccelSpeed = 3000.00f;
    this->m_ProjectileMaxSpeed = 6000.00f;
    this->m_ProjectileMaxAngleYaw = 30.00f;
    this->m_ProjectileMinAnglePitch = 25.00f;
    this->m_ProjectileMaxAnglePitch = 30.00f;
    this->m_HomingSpeed = 30.00f;
    this->m_HomingAccelSpeed = 360.00f;
    this->m_HomingMaxSpeed = 120.00f;
    this->m_HomingOffsetDistMin = 300.00f;
    this->m_HomingOffsetDistMax = 500.00f;
    this->m_HomingEndDist = 500.00f;
    this->m_HomingEndAngle = 180.00f;
    this->m_HomingAbsoluteTime = 0.00f;
}

