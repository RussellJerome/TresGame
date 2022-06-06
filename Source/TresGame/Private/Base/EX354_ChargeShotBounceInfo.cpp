#include "EX354_ChargeShotBounceInfo.h"

FEX354_ChargeShotBounceInfo::FEX354_ChargeShotBounceInfo() {
    this->m_bCountReflectAsBounce = false;
    this->m_fMaxBounceCountDistance = 0.00f;
    this->m_EQS_Bounce = NULL;
    this->m_fEQSWaitTime = 0.00f;
}

