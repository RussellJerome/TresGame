#include "EX359_BeamOnSplineInfo.h"

FEX359_BeamOnSplineInfo::FEX359_BeamOnSplineInfo() {
    this->m_ProjectileClass = NULL;
    this->m_fStartRadius = 0.00f;
    this->m_fStartAngle = 0.00f;
    this->m_fSplineSizeScale = 0.00f;
    this->m_bSplineReverse = false;
    this->m_fSplineAngleOffset = 0.00f;
    this->m_fMaxWaitTime = 0.00f;
    this->m_fAccel = 0.00f;
    this->m_fMaxVelocity = 0.00f;
    this->m_fMaxMoveEndLifeTime = 0.00f;
    this->m_bStopOnEnd = false;
    this->m_fDebugDispTime = 0.00f;
    this->m_bDebugDisp = false;
    this->m_SplineComp = NULL;
    this->m_Owner = NULL;
    this->m_Projectile = NULL;
}

