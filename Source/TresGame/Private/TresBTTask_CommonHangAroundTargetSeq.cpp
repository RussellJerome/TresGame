#include "TresBTTask_CommonHangAroundTargetSeq.h"

UTresBTTask_CommonHangAroundTargetSeq::UTresBTTask_CommonHangAroundTargetSeq() {
    this->m_TaskModeEnum = COMMON_HANGAROUNDTARGET_MODE_Enum::Boorish;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonMoveRadius = 800.00f;
    this->m_CommonMoveWidth = 400.00f;
    this->m_CommonTurnRadio = 1.00f;
    this->m_CommonForwardRadio = 1.00f;
}

