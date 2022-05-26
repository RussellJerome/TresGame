#include "TresLevelEntityRestartTarget.h"

FTresLevelEntityRestartTarget::FTresLevelEntityRestartTarget() {
    this->m_SequenceOwner = NULL;
    this->m_Sequence = ETresLevelEntityRestartSequence::RESTART_ENTER_SEQUENCE;
}

