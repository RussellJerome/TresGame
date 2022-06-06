#include "EX354_ClusterShotInfo.h"

FEX354_ClusterShotInfo::FEX354_ClusterShotInfo() {
    this->m_iMaxHitNum = 0;
    this->m_bMaxHitNum = false;
    this->m_iMaxGuardNum = 0;
    this->m_bMaxGuardNum = false;
    this->m_bStartMoveAll = false;
    this->m_fMinMoveWaitTime = 0.00f;
    this->m_fMaxMoveWaitTime = 0.00f;
    this->m_fMoveWaitTimeSingle = 0.00f;
    this->m_fSpreadAngle = 0.00f;
    this->m_fMaxMoveAngle = 0.00f;
    this->m_fMoveStraightOnTargetOut = false;
    this->m_bDebugDisp = false;
    this->m_TargetActor = NULL;
}

