#include "EX354_UpShotInfo.h"

FEX354_UpShotInfo::FEX354_UpShotInfo() {
    this->m_fVelocity = 0.00f;
    this->m_fMaxUpTime = 0.00f;
    this->m_fMaxDownTime = 0.00f;
    this->m_fRotateVelocity = 0.00f;
    this->m_bKeepVelocityOnHoming = false;
    this->m_fMinHomingTime = 0.00f;
}

