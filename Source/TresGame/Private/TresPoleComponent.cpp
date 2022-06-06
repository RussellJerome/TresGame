#include "TresPoleComponent.h"



UTresPoleComponent::UTresPoleComponent() {
    this->m_bEnableNearDetectOffset = false;
    this->m_AttachRadius = 0.00f;
    this->m_CheckRadius = 50.00f;
    this->m_bIsHorizontality = false;
    this->m_OrderNumber = 0;
    this->m_NextOrderNumber = 0;
    this->m_PrevOrderNumber = 0;
    this->m_pFreeRunEffect = NULL;
}

