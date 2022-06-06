#include "TresLocomotionDefinitionAir.h"

UTresLocomotionDefinitionAir::UTresLocomotionDefinitionAir() {
    this->m_bAltitudeLimiter = false;
    this->m_MinAltitude = 0.00f;
    this->m_MaxAltitude = 500.00f;
    this->m_bKeepCurrentAltitude = false;
}

