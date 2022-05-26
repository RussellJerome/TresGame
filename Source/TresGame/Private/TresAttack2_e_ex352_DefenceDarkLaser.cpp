#include "TresAttack2_e_ex352_DefenceDarkLaser.h"

UTresAttack2_e_ex352_DefenceDarkLaser::UTresAttack2_e_ex352_DefenceDarkLaser() {
    this->m_SpawnNum = 10;
    this->m_BeginLaserIrradiationTime = 1.00f;
    this->m_LaserIrradiationSignTime = 0.50f;
    this->m_LaserIrradiationLoopTime = 3.00f;
    this->m_LaserExtendSpeed = 4000.00f;
    this->m_SpawnRadius = 250.00f;
    this->m_SpawnHeight = 500.00f;
    this->m_InitSpeed = 0.00f;
    this->m_AccelSpeed = 100.00f;
    this->m_MaxSpeed = 300.00f;
    this->m_DeccelSpeed = 100.00f;
    this->m_MoveSpeedCurveData = NULL;
    this->m_MinSpeed = 0.00f;
    this->m_MaxHomingSpeed = 360.00f;
    this->m_HomingMaxAngle = 0.00f;
    this->m_FloorHeight = 100.00f;
    this->m_DecelerationWhenGuarded = 400.00f;
    this->m_DecelerationWhenTime = 1.00f;
    this->m_SignStartRequiredTime = 0.20f;
    this->m_SignEndRequiredTime = 0.10f;
    this->m_DefenceDarkLaser = NULL;
}

