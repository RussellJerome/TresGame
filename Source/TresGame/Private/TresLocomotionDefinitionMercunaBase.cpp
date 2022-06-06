#include "TresLocomotionDefinitionMercunaBase.h"

UTresLocomotionDefinitionMercunaBase::UTresLocomotionDefinitionMercunaBase() {
    this->m_bUsePitchForPawnProperty = true;
    this->m_bPitchLimiter = true;
    this->m_MinPitch = -20.00f;
    this->m_MaxPitch = 20.00f;
    this->m_bDesiredFacingOrientationPitchLimiter = false;
}

