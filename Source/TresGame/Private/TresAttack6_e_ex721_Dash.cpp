#include "TresAttack6_e_ex721_Dash.h"

UTresAttack6_e_ex721_Dash::UTresAttack6_e_ex721_Dash() {
    this->m_DashEffectData = NULL;
    this->m_DashTime = 1.00f;
    this->m_DashInitSpeed = 3000.00f;
    this->m_DashAccelSpeed = 5000.00f;
    this->m_DashMaxSpeed = 5000.00f;
    this->m_EndDashDecelSpeed = 3000.00f;
    this->m_EndDashTargetHitNum = 3;
    this->m_BeginLimitPitch = 20.00f;
    this->m_HomingSpeedXY = 100.00f;
    this->m_HomingSpeedZ = 100.00f;
    this->m_HomingMaxAngleXY = 100.00f;
    this->m_HomingMaxAngleZ = 100.00f;
    this->m_HomingMinDestance = 1000.00f;
    this->m_TurnLimitPitch = 20.00f;
    this->m_RotateSpeed = 0.05f;
    this->m_DashEffectCmp = NULL;
}

