#include "TresLocomotionDefinitionLand.h"

UTresLocomotionDefinitionLand::UTresLocomotionDefinitionLand() {
    this->m_bQuickStopEnabled = false;
    this->m_ClimbingPossibleEntryAngle = 30.00f;
    this->m_MinJumpHeight = 100.00f;
    this->m_bFallingCheck = true;
    this->m_FallingThreshold = 2.00f;
    this->m_bStopMovingByAvoidance = false;
}

