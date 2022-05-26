#include "TresBTTask_CommonTurnIdlingSeq.h"

UTresBTTask_CommonTurnIdlingSeq::UTresBTTask_CommonTurnIdlingSeq() {
    this->m_CommonLocomotionDefinition = NULL;
    this->m_CommonTurningValue = 0.00f;
    this->m_CommonAvoidanceWeight = 0.20f;
    this->m_CommonRangeCheck = 500.00f;
    this->m_CommonAngleCheck = 30.00f;
}

