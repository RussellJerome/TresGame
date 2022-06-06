#include "TresBTTask_DirectionalMoveSeq.h"

UTresBTTask_DirectionalMoveSeq::UTresBTTask_DirectionalMoveSeq() {
    this->m_TaskModeEnum = DIRECTIONAL_MOVE_MODE_Enum::Forward;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonMinDistance = 0.00f;
    this->m_CommonMaxDistance = 120.00f;
    this->m_CommonPawnDistance = 0.00f;
    this->m_CommonUpdateTime = 0.00f;
}

