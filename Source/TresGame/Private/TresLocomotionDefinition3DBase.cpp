#include "TresLocomotionDefinition3DBase.h"

UTresLocomotionDefinition3DBase::UTresLocomotionDefinition3DBase() {
    this->m_bUsePitchForPawnProperty = true;
    this->m_bPitchLimiter = false;
    this->m_MinPitch = -20.00f;
    this->m_MaxPitch = 20.00f;
    this->m_LockTimeAfterAvoid = 0.20f;
    this->m_DeltaTimeToPredict = 0.25f;
}

