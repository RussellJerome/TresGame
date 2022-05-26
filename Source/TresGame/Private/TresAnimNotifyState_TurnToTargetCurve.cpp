#include "TresAnimNotifyState_TurnToTargetCurve.h"

UTresAnimNotifyState_TurnToTargetCurve::UTresAnimNotifyState_TurnToTargetCurve() {
    this->m_CurveData = NULL;
    this->m_TurnSpeed = 360.00f;
    this->m_StartValue = 0.00f;
    this->m_EndValue = 1.00f;
}

