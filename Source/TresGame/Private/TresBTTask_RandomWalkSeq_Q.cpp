#include "TresBTTask_RandomWalkSeq_Q.h"

UTresBTTask_RandomWalkSeq_Q::UTresBTTask_RandomWalkSeq_Q() {
    this->m_TaskModeEnum = COMMON_RANDOMWALK_MODE_Enum::Forward;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonUpdateTime = 0.50f;
    this->m_CommonOnRingAngle = 120.00f;
    this->m_ItemSpace = 100.00f;
}

