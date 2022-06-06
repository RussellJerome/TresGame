#include "TresAnimNode_SplineAnchor.h"

FTresAnimNode_SplineAnchor::FTresAnimNode_SplineAnchor() {
    this->Alpha = 0.00f;
    this->m_IsAnchorMode = false;
    this->m_InterpType = ETresSplineAnchorInterpType::TSAIT_SPLINE;
}

