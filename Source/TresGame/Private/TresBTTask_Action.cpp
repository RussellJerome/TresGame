#include "TresBTTask_Action.h"

UTresBTTask_Action::UTresBTTask_Action() {
    this->m_bUseBlackboardActionDefinition = false;
    this->m_ActionDefinition = NULL;
    this->m_AIActionAbortTimingID = ETresAIActionAbortTimingID::ID_None;
    this->m_AbortTime = -1.00f;
}

