#include "TresBTTask_MoveToProcess.h"

UTresBTTask_MoveToProcess::UTresBTTask_MoveToProcess() {
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
}

