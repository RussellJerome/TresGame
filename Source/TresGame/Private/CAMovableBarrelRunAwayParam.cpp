#include "CAMovableBarrelRunAwayParam.h"

FCAMovableBarrelRunAwayParam::FCAMovableBarrelRunAwayParam() {
    this->m_directionOfRunAwayChangeInterval = 0.00f;
    this->m_MinDistance = 0.00f;
    this->m_MaxDistance = 0.00f;
    this->m_SleepWaitTime = 0.00f;
    this->m_MaxRandomAngleForRunAway = 0.00f;
    this->m_MaxRandomAngleForMiddle = 0.00f;
    this->m_MaxRandomAngleForGetBack = 0.00f;
    this->m_TurnRateForRunAway = 0.00f;
    this->m_TurnRateForMiddle = 0.00f;
    this->m_SpeedForRunAway = 0.00f;
    this->m_SpeedForMiddle = 0.00f;
}

