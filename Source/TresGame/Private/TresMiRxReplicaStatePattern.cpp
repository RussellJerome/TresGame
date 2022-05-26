#include "TresMiRxReplicaStatePattern.h"

FTresMiRxReplicaStatePattern::FTresMiRxReplicaStatePattern() {
    this->m_bIsFirstTimeUseOnly = false;
    this->m_dTransitionPercent = 0;
    this->m_eStateIDWhenInterrupt = TSID_STATE_EMPTY;
}

