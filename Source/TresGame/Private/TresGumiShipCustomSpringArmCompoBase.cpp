#include "TresGumiShipCustomSpringArmCompoBase.h"

UTresGumiShipCustomSpringArmCompoBase::UTresGumiShipCustomSpringArmCompoBase() {
    this->m_fBaseArmLength = 300.00f;
    this->m_bDoCllisionTest = false;
    this->m_fProbeSize = 12.00f;
    this->m_eProbeChannel = ECC_Camera;
    this->m_fLafSubStepMaxTime = 0.00f;
    this->m_bUseRotationLag = false;
    this->m_fLagRotationSpeed = 10.00f;
    this->m_bUseLocationLag = false;
    this->m_fLagLocationSpeed = 10.00f;
    this->m_fLimitDistOfRightLeftLag = 300.00f;
    this->m_fLimitDistOfUpLag = 200.00f;
    this->m_fLimitDistOfDownLag = 30.00f;
    this->m_bUseDepthLag = false;
}

