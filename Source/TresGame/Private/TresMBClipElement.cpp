#include "TresMBClipElement.h"

FTresMBClipElement::FTresMBClipElement() {
    this->m_CameraIndex = 0;
    this->m_Start = 0.00f;
    this->m_Stop = 0.00f;
    this->m_bFadeOut = false;
    this->m_FadeoutTime = 0.00f;
    this->m_bFadeOutCaptureEveryFrame = false;
    this->m_FadeOutCaptureOffsetTime = 0.00f;
    this->m_PreBlankTime = 0.00f;
    this->m_PostBlankTime = 0.00f;
}

