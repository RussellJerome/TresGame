#include "TresBTTask_MoveToOnRing.h"

UTresBTTask_MoveToOnRing::UTresBTTask_MoveToOnRing() {
    this->m_CommonLocomotionDefinition = NULL;
    this->m_AvoidanceWeight = 0.50f;
    this->m_AcceptableRadius = -1.00f;
    this->m_bPreciseArrival = false;
    this->m_bFastAbort = false;
    this->m_bFailOnDamageReaction = true;
    this->m_CommonUpdateTime = 0.50f;
    this->m_CommonUpdateTimeRandomDeviation = 0.00f;
    this->m_bOnRingAutoRadius = false;
    this->m_bOnRingAutoItemSpace = false;
}

