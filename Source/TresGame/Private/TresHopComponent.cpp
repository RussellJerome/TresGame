#include "TresHopComponent.h"

UTresHopComponent::UTresHopComponent() {
    this->m_CheckRadius = 100.00f;
    this->m_bIsOrder = false;
    this->m_OrderNumber = 0;
    this->m_IdleMotionType = THIM_HOPPING;
    this->m_bIsEndPoint = false;
    this->m_EndMotionType = THIM_NONE;
    this->m_bIsClosing = false;
    this->m_bIsSurfing = false;
    this->m_bIsTripping = false;
    this->m_bIsDangle = false;
    this->m_bIsHassou = false;
    this->m_bDisableEffect = false;
    this->m_HassouMotionType = THIM_NONE;
    this->m_pFreeRunEffect = NULL;
}

