#include "TresAttack3_e_ex081_GlideSword.h"

UTresAttack3_e_ex081_GlideSword::UTresAttack3_e_ex081_GlideSword() {
    this->m_GlideSwordStartTurnRate = 0.50f;
    this->m_GlideSwordStartLimitPitch = 30.00f;
    this->m_GlideSwordInitialMoveSpeed = 1500.00f;
    this->m_GlideSwordAccelMoveSpeed = 2000.00f;
    this->m_GlideSwordMaxMoveSpeed = 3000.00f;
    this->m_GlideSwordMoveTime = 10.00f;
    this->m_HomingSpeedXY = 360.00f;
    this->m_HomingMaxAngleXY = 60.00f;
    this->m_HomingSpeedZ = 360.00f;
    this->m_HomingMaxAngleZ = 60.00f;
    this->m_HomigMinDist = 360.00f;
    this->m_HomingMaxAngleToEndTime = 0.50f;
    this->m_GlideSwordEndInitialMoveSpeed = 1000.00f;
    this->m_GlideSwordEndDecelMoveSpeed = 2000.00f;
    this->m_GlideSwordEndMinMoveSpeed = 100.00f;
    this->m_GlideSwordEndAngle = 30.00f;
    this->m_TiltNormalRate = 0.20f;
    this->m_WallHitEndAngle = 150.00f;
}

