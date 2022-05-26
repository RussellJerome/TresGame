#include "TresDebugMenuElement.h"

FTresDebugMenuElement::FTresDebugMenuElement() {
    this->m_X = 0.00f;
    this->m_Y = 0.00f;
    this->m_Width = 0.00f;
    this->m_Height = 0.00f;
    this->m_BlendMode = ETresDebugMenuBlendMode_normal;
    this->m_ResourceType = ETresDebugMenuResourceType_Image;
    this->m_ResourceIndex = 0;
}

