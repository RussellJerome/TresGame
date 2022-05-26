#include "AITestTractionParam.h"

FAITestTractionParam::FAITestTractionParam() {
    this->m_bTractionXY = false;
    this->m_bTractionZUp = false;
    this->m_bTractionZDown = false;
    this->m_bTractionNear = false;
    this->m_bTractionFar = false;
    this->m_TractionDisMin = 0.00f;
    this->m_TractionDisMax = 0.00f;
    this->m_TractionMaxSpeed = 0.00f;
    this->m_TractionAcc = 0.00f;
}

