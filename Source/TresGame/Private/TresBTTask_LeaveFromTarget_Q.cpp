#include "TresBTTask_LeaveFromTarget_Q.h"

UTresBTTask_LeaveFromTarget_Q::UTresBTTask_LeaveFromTarget_Q() {
    this->m_TaskModeEnum = LEAVE_FROM_TARGET_MODE_Enum::Away;
    this->m_CommonLocomotionDefinition = NULL;
    this->m_FirstUpdateTime = 0.25f;
    this->m_FirstTimeLimit = 1.50f;
    this->m_CommonUpdateTime = 1.00f;
    this->m_CommonOnRingAngle = 120.00f;
    this->m_ItemSpace = 200.00f;
}

