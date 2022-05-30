#include "EX354_DownShotInfo.h"

FEX354_DownShotInfo::FEX354_DownShotInfo() {
    this->m_fVelocity = 0.00f;
    this->m_fLandMoveStartHeight = 0.00f;
    this->m_fLandMoveHeight = 0.00f;
    this->m_fMaxLandMoveTime = 0.00f;
    this->m_fRotateVelocity = 0.00f;
    this->m_bKeepVelocityOnHoming = false;
    this->m_fNoHomingDistance = 0.00f;
}

