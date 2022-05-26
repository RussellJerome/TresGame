#include "TresBTTask_SurroundTargetSeq_T.h"

UTresBTTask_SurroundTargetSeq_T::UTresBTTask_SurroundTargetSeq_T() {
    this->m_TaskModeEnum = COMMON_SURROUNDTARGET_MODE_Enum::Right;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonMoveRadius = 600.00f;
    this->m_CommonMoveRadiusWidth = 100.00f;
    this->m_CommonMoveWidth = 100.00f;
    this->m_CommonTurnRadio = 1.00f;
    this->m_CommonUpdateTime = 0.50f;
    this->m_Angle = 120.00f;
    this->m_ItemSpace = 200.00f;
}

