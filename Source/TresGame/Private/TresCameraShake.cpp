#include "TresCameraShake.h"

UTresCameraShake::UTresCameraShake() {
    this->m_bRealDeltaTime = false;
    this->m_bSyncCameraActor = false;
    this->m_bSyncCameraNormal = false;
    this->m_AttenuationDistanceCurve = NULL;
    this->m_bAttenuationDistanceCurve = false;
    this->m_fAttenuationDistance = 0.00f;
    this->m_bOwnerActorCheck = false;
}

