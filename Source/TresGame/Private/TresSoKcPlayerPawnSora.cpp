#include "TresSoKcPlayerPawnSora.h"

void ATresSoKcPlayerPawnSora::_SetUserControllPermission(bool bIsUserControllAccept) {
}

void ATresSoKcPlayerPawnSora::_DetachKeyBladeBeamEffect() {
}

void ATresSoKcPlayerPawnSora::_ChangeKeyHoleConnectMissionState() {
}

ATresSoKcPlayerPawnSora::ATresSoKcPlayerPawnSora() {
    this->m_pAppendAnimSet = NULL;
    this->m_pLightSphereEffectAsset = NULL;
    this->m_pKeyBladeBeamEffectAsset = NULL;
    this->m_CameraClass = NULL;
    this->m_LightWaveProjectileClass = NULL;
    this->m_pLastLightCameraRotationCurveData = NULL;
    this->m_fCameraPitchUpperLimit = 45.00f;
    this->m_fCameraPitchLowerLimit = -45.00f;
    this->m_fDefaultKeyBladeBeamLength = 1000.00f;
    this->m_fDotRangeToTargetDirectionForAimInterp = 1.00f;
    this->m_fDotRangeWithMovementDirectionForAimInterp = 0.50f;
}

