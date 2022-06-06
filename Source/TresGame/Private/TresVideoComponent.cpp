#include "TresVideoComponent.h"

void UTresVideoComponent::StopVideo() {
}

void UTresVideoComponent::ResumeVideo() {
}

void UTresVideoComponent::ReserveStopVideo() {
}

void UTresVideoComponent::PrepareVideo() {
}

void UTresVideoComponent::PlayVideo() {
}

void UTresVideoComponent::PauseVideo() {
}

bool UTresVideoComponent::IsPreparing() {
    return false;
}

bool UTresVideoComponent::IsPrepared() {
    return false;
}

bool UTresVideoComponent::IsPreparable() {
    return false;
}

void UTresVideoComponent::CancelPrepareVideo() {
}

UTresVideoComponent::UTresVideoComponent() {
    this->m_TextureRenderTarget2D = NULL;
    this->m_AutoPlay = true;
    this->m_Prepare = false;
    this->m_Loop = true;
    this->m_ForUI = false;
    this->m_IsPrepared = false;
    this->m_RetryWhenPlayTimeOut = true;
    this->m_RetryCount = 0;
    this->m_IsPrepareCancel = false;
    this->m_IsReserveStopVideo = false;
}

