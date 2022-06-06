#include "TresPlayerControllerLowerBase.h"

class ATresCameraManager;

void ATresPlayerControllerLowerBase::ToggleTresCameraDebugStop() {
}

void ATresPlayerControllerLowerBase::ToggleTresCameraDebug() {
}

void ATresPlayerControllerLowerBase::OnDebugPauseFrameSkip() {
}

void ATresPlayerControllerLowerBase::OnDebugPauseEnableGamePad() {
}

void ATresPlayerControllerLowerBase::OnDebugPauseEnable() {
}

ATresCameraManager* ATresPlayerControllerLowerBase::GetTresCameraManager() const {
    return NULL;
}

void ATresPlayerControllerLowerBase::EnableDebugPauseFunction(bool bEnable) {
}

void ATresPlayerControllerLowerBase::DebugShowMatineeTime() {
}

void ATresPlayerControllerLowerBase::DebugShowCameraDebugInfo(bool bEnable) {
}

void ATresPlayerControllerLowerBase::DebugSetGameFrameRate(float InMaxFrame, float InMinFrame) {
}

void ATresPlayerControllerLowerBase::DebugSetFixedDeltaTime(float InFrameRate) {
}

void ATresPlayerControllerLowerBase::DebugSetCameraZero() {
}

void ATresPlayerControllerLowerBase::DebugSetCameraSpeedScale(float SpeedScale) {
}

void ATresPlayerControllerLowerBase::DebugSetCameraFieldOfView(float FOV) {
}

void ATresPlayerControllerLowerBase::DebugGamePadSpecialLeftDebugPause(int32 debugPauseStyle) {
}

void ATresPlayerControllerLowerBase::DebugCameraShutOutFade(bool bEnable) {
}

void ATresPlayerControllerLowerBase::DebugCameraCollCheck(uint8 EnableNo) {
}

ATresPlayerControllerLowerBase::ATresPlayerControllerLowerBase() {
    this->m_pCameraManager = NULL;
    this->m_pCameraDebug = NULL;
}

