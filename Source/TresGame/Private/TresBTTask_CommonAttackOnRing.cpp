#include "TresBTTask_CommonAttackOnRing.h"

UTresBTTask_CommonAttackOnRing::UTresBTTask_CommonAttackOnRing() {
    this->m_CommonLocomotionDefinition = NULL;
    this->m_AvoidanceWeight = 0.50f;
    this->m_AcceptableRadius = -1.00f;
    this->m_bPreciseArrival = false;
    this->m_bFastAbort = true;
    this->m_bFailOnDamageReaction = true;
    this->m_CommonUpdateTime = 0.50f;
    this->m_CommonUpdateTimeRandomDeviation = 0.00f;
    this->m_bOnRingAutoRadius = false;
    this->m_bOnRingAutoItemSpace = false;
}

