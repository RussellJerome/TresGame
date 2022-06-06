#include "TresLocomotionDefinitionLandCodeDriven.h"

UTresLocomotionDefinitionLandCodeDriven::UTresLocomotionDefinitionLandCodeDriven() {
    this->m_RunStartAnimData = NULL;
    this->m_RunLoopAnimData = NULL;
    this->m_RunEndAnimData = NULL;
    this->m_QuickTurnAnimData = NULL;
    this->m_QuickStopAnimData = NULL;
    this->m_RunEndLeftAnimData = NULL;
    this->m_RunEndRightAnimData = NULL;
    this->m_WalkEndLeftAnimData = NULL;
    this->m_WalkEndRightAnimData = NULL;
    this->m_RunLoopInterpolationTime = -1.00f;
    this->m_bUsePropertyAnimData = true;
    this->m_bUseRunLoopInterpolationTime = false;
    this->m_bPrioritizeRunStartAnim = false;
}

