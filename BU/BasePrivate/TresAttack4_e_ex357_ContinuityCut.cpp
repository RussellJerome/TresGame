#include "TresAttack4_e_ex357_ContinuityCut.h"

UTresAttack4_e_ex357_ContinuityCut::UTresAttack4_e_ex357_ContinuityCut() {
    this->m_NumLoop = 3;
    this->m_LandHomingSpeedYaw = 0.00f;
    this->m_AirHomingSpeedYaw = 0.00f;
    this->m_AirHomingSpeedPitch = 0.00f;
    this->m_AirHomingLimitAnglePitch = 0.00f;
    this->m_EndHomingSpeed = 0.00f;
    this->m_ActionType = ETresEnemyContinuityCutAction_e_ex357::Auto;
    this->m_bIsStartEndMotion = false;
}

