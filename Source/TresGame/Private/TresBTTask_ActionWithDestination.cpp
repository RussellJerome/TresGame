#include "TresBTTask_ActionWithDestination.h"

UTresBTTask_ActionWithDestination::UTresBTTask_ActionWithDestination() {
    this->m_bUseBlackboardActionDefinition = false;
    this->m_ActionDefinition = NULL;
    this->m_AIActionAbortTimingID = ETresAIActionAbortTimingID::ID_None;
    this->m_AbortTime = -1.00f;
    this->m_bUpdateDestination = false;
}

