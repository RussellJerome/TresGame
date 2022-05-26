#include "TresFootStepComponent.h"

UTresFootStepComponent::UTresFootStepComponent() {
    this->m_FootStepSet = NULL;
    this->m_bEnable = true;
    this->m_bAlwaysPut = false;
    this->m_bWetPut = true;
    this->m_WetCount = 0.00f;
    this->m_bIsWet = false;
    this->m_OwnerMeth = NULL;
}

