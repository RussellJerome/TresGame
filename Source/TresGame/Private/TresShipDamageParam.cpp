#include "TresShipDamageParam.h"

FTresShipDamageParam::FTresShipDamageParam() {
    this->m_bForce = false;
    this->m_bActionCancel = false;
    this->m_SpeedRate = 0.00f;
    this->m_PitchRollPower = 0.00f;
    this->m_YawPower = 0.00f;
    this->m_MovePower = 0.00f;
    this->m_WaitTimer = 0.00f;
    this->m_SpeedRateTime = 0.00f;
}

