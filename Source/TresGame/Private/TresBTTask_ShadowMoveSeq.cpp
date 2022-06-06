#include "TresBTTask_ShadowMoveSeq.h"

UTresBTTask_ShadowMoveSeq::UTresBTTask_ShadowMoveSeq() {
    this->m_TaskModeEnum = COMMON_SHADOWMOVE_MODE_Enum::Approach;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonMoveRadius = 500.00f;
    this->m_CommonMoveRandomRadius = 200.00f;
}

