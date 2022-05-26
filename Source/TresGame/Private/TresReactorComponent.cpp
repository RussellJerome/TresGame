#include "TresReactorComponent.h"

UTresReactorComponent::UTresReactorComponent() {
    this->m_bDrawBBox = true;
    this->m_bLimitRotRange = false;
    this->m_RotRangeProp = 180.00f;
    this->m_bNeedRayCheck = false;
    this->m_Command = ETresReactorCommandID::TRES_RCID_UNKNOWN;
    this->m_CmdTargetActor = NULL;
    this->m_bDisableTargetMarker = false;
    this->m_bDisableCommandDisp = false;
    this->m_pBodySetup = NULL;
}

