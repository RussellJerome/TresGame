#include "EX354_ArtemaWarpShotInfo.h"

FEX354_ArtemaWarpShotInfo::FEX354_ArtemaWarpShotInfo() {
    this->m_fMaxShotTime = 0.00f;
    this->m_fShotInterval = 0.00f;
    this->m_fWaitTime = 0.00f;
    this->m_bSpawnInRectangle = false;
    this->m_fSpawnLocDeviationXY = 0.00f;
    this->m_fSpawnLocDeviationX = 0.00f;
    this->m_fSpawnLocDeviationY = 0.00f;
    this->m_fSpawnLocDeviationZ = 0.00f;
    this->m_bAimInRectangle = false;
    this->m_fAimLocDeviationRadius = 0.00f;
    this->m_fAimLocDeviationX = 0.00f;
    this->m_fAimLocDeviationY = 0.00f;
    this->m_bUseGrid = false;
    this->m_fAimLocMaxTargetVelocity = 0.00f;
    this->m_fAimLocTargetVelocityRate = 0.00f;
    this->m_bAimLocTargetVelocity2D = false;
    this->m_bAimLocEachShot = false;
    this->m_EqsIndex = 0;
    this->m_bRefreshEQS = false;
}

