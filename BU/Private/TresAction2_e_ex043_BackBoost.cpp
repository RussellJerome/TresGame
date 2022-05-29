#include "TresAction2_e_ex043_BackBoost.h"

UTresAction2_e_ex043_BackBoost::UTresAction2_e_ex043_BackBoost() {
    this->m_fCodeCanExecuteSweepDist = 100.00f;
    this->m_fBoostAngle = 50.00f;
    this->m_fBoostSpeed = 7000.00f;
    this->m_fBoostDuration = 0.30f;
    this->m_fFallingTurnSpeed = 100.00f;
    this->m_FallingDecelerationCurve_XY = NULL;
    this->m_FallingDecelerationCurve_Z = NULL;
    this->m_bIsQuickEnd = false;
    this->m_fQuickEndTime = 0.30f;
    this->m_bDebugWarpToStart = false;
}

