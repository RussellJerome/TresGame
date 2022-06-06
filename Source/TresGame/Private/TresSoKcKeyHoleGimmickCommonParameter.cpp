#include "TresSoKcKeyHoleGimmickCommonParameter.h"

FTresSoKcKeyHoleGimmickCommonParameter::FTresSoKcKeyHoleGimmickCommonParameter() {
    this->m_fConnectBeamMaxSpeed = 0.00f;
    this->m_fConnectBeamInitialSpeed = 0.00f;
    this->m_fConnectBeamAcceleration = 0.00f;
    this->m_fLastLightConnectBeamMaxSpeed = 0.00f;
    this->m_fLastLightConnectBeamInitialSpeed = 0.00f;
    this->m_fLastLightConnectBeamAcceleration = 0.00f;
    this->m_nConnectedKeyHolePassableLimitNum = 0;
    this->m_uChanceMarkerLimitNum = 0;
    this->m_uBigChanceMarkerLimitNum = 0;
    this->m_fChanceMarkerProbability = 0.00f;
    this->m_fBigChanceMarkerProbability = 0.00f;
    this->m_fBigChanceMarkerLimitTime = 0.00f;
    this->m_nBigChanceMarkerNormaConnectedCount = 0;
}

