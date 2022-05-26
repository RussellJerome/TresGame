#include "TresGumiShipSplinePathMoveParameter.h"

FTresGumiShipSplinePathMoveParameter::FTresGumiShipSplinePathMoveParameter() {
    this->m_fPathMoveSpeed = 0.00f;
    this->m_fMaxPathMoveSpeed = 0.00f;
    this->m_fPathMoveAcceleration = 0.00f;
    this->m_fPathMoveDeceleration = 0.00f;
    this->m_fStartDistanceRate = 0.00f;
    this->m_bReversePath = false;
    this->m_bLoopPath = false;
}

