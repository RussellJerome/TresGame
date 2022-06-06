#include "TresBTTask_MoveTo.h"

UTresBTTask_MoveTo::UTresBTTask_MoveTo() {
    this->m_LocomotionDefinition = NULL;
    this->m_AcceptableRadius = -1.00f;
    this->m_bUsePathFollowing = true;
    this->m_bUseAvoidance = true;
    this->m_bAllowPartialPath = true;
    this->m_bStopOnOverlap = true;
    this->m_AvoidanceWeight = 0.50f;
    this->m_bPreciseArrival = true;
    this->m_bFastAbort = false;
    this->m_bFailOnDamageReaction = true;
    this->m_AbortMoveTimeToKeepMoving = 0.10f;
    this->m_bUseFindPathAsync = false;
    this->m_bUseBBLocomotionDefinition = false;
    this->m_GoalComponetLocationTetherDistance = 50.00f;
    this->m_AvoidanceRadiusScale = 1.00f;
}

