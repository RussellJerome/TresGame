#include "TresAttack1_e_ex316_HomingDarkLaser.h"

UTresAttack1_e_ex316_HomingDarkLaser::UTresAttack1_e_ex316_HomingDarkLaser() {
    this->m_bIsCoopAction = false;
    this->m_CooperationVoice = NULL;
    this->m_SpawnNum = 5;
    this->m_SpawnSameTimeNum = 1;
    this->m_BeginLaserIrradiationTime = 5.00f;
    this->m_LaserShiftMinTime = 0.70f;
    this->m_LaserShiftMaxTime = 0.70f;
    this->m_LaserIrradiationSignTime = 1.00f;
    this->m_LaserIrradiationLoopTime = 1.00f;
    this->m_LaserExtendSpeed = 4000.00f;
    this->m_InitSpeed = 0.00f;
    this->m_AccelSpeed = 3000.00f;
    this->m_MaxSpeed = 300.00f;
    this->m_DeccelSpeed = 1000.00f;
    this->m_MinSpeed = 0.00f;
    this->m_SignStartRequiredTime = 0.20f;
    this->m_SignEndRequiredTime = 0.10f;
}

