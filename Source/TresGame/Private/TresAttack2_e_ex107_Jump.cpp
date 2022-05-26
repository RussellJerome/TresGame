#include "TresAttack2_e_ex107_Jump.h"

UTresAttack2_e_ex107_Jump::UTresAttack2_e_ex107_Jump() {
    this->m_RiseStartAnimData = NULL;
    this->m_RiseLoopAnimData = NULL;
    this->m_FallStartAnimData = NULL;
    this->m_FallLoopAnimData = NULL;
    this->m_LandAnimData = NULL;
    this->m_FollowInitialSpeedXY = 100.00f;
    this->m_FollowAccelerationXY = 7000.00f;
    this->m_FollowMaxSpeedXY = 1400.00f;
    this->m_FollowSpeedZ = 700.00f;
    this->m_TargetOffsetHeight = 300.00f;
    this->m_StartTime = 1.00f;
    this->m_FallFollowLimitTime = 0.50f;
    this->m_LimitTime = 5.00f;
    this->m_LimitHeight = 4000.00f;
    this->m_DescentSpeed = 600.00f;
    this->m_DescentAccel = 1000.00f;
    this->m_DescentMaxSpeed = 2000.00f;
}

