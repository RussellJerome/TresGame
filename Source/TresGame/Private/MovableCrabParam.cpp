#include "MovableCrabParam.h"

FMovableCrabParam::FMovableCrabParam() {
    this->m_directionChangeInterval = 0.00f;
    this->m_turnRate = 0.00f;
    this->m_turnRateOnHitWall = 0.00f;
    this->m_turnRateTimeOnHitWall = 0.00f;
    this->m_moveRange = 0.00f;
    this->m_moveRangePredictRate = 0.00f;
    this->m_defaultVelocity = 0.00f;
    this->m_maxDeltaAngle = 0.00f;
    this->m_gravityScaleOnMove = 0.00f;
}

