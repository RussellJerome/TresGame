#include "TresRaFestivalDanceSplineComponent.h"

UTresRaFestivalDanceSplineComponent::UTresRaFestivalDanceSplineComponent() {
    this->m_fOnRange = 8.00f;
    this->m_fOnLineJudgeRange = 50.00f;
    this->m_fOnLineJudgeYaw = 20.00f;
    this->m_fLimitAngle = 70.00f;
    this->m_fTurnSpeedRate = 0.35f;
    this->m_fMoveSpeedNormal = 100.00f;
    this->m_fTurnSpeedNormal = 100.00f;
    this->m_fMoveSpeedReturn = 200.00f;
    this->m_fTurnSpeedReturn = 60.00f;
    this->m_fMoveSpeedCenter = 0.00f;
    this->m_fTurnSpeedCenter = 0.00f;
    this->m_TotalNormalCount = 0;
    this->m_CenterKeepRate = 0.00f;
    this->m_fCenterFollowRange = 0.00f;
    this->m_bCenterFollowRestrict = false;
}

