#include "TresBTTask_CommonRoundAndRoundSeq.h"

UTresBTTask_CommonRoundAndRoundSeq::UTresBTTask_CommonRoundAndRoundSeq() {
    this->m_TaskModeEnum = COMMON_ROUNDANDROUND_MODE_Enum::Right;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonMoveRadius = 600.00f;
    this->m_CommonMoveWidth = 400.00f;
    this->m_CommonTurnRadio = 1.00f;
    this->m_CommonUpdateTime = 0.50f;
}

