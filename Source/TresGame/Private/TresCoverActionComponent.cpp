#include "TresCoverActionComponent.h"

UTresCoverActionComponent::UTresCoverActionComponent() {
    this->m_bDrawBBox = true;
    this->m_IdlingDir = ETresCoverIdlingDirID::TRES_CID_ID_NONE;
    this->m_bEnableCoverDir = false;
    this->m_bEnableSlideLockon = true;
    this->m_bEnableSlideShotForcedDirection = false;
    this->m_CoverCameraID = 0;
    this->m_pBodySetup = NULL;
}

