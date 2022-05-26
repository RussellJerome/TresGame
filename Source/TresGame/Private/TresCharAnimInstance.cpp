#include "TresCharAnimInstance.h"

UTresCharAnimInstance::UTresCharAnimInstance() {
    this->VelocityXY = 0.00f;
    this->VelocityZ = 0.00f;
    this->AccelerationXY = 0.00f;
    this->AccelerationZ = 0.00f;
    this->bIsSlotAnimPlay = false;
    this->bIsRunMode = false;
    this->m_LegIKAlpha = 0.00f;
    this->m_LegIKOffset = 0.00f;
    this->m_ArmIKAlpha = 0.00f;
    this->RLegIKRate = 0.00f;
    this->LLegIKRate = 0.00f;
    this->LookAtRate = 0.00f;
    this->LookAtParamA = 0.00f;
    this->MyOwnerLookAtParamA = 0.00f;
    this->m_bIsDirectLookAt = false;
    this->m_FaceAnimBlendRate = 1.00f;
    this->blendBodyWeight = 0.00f;
    this->blendFaceWeight = 0.00f;
    this->blendMouthWeight = 0.00f;
    this->blendKubiWeight = 0.00f;
    this->blendAtamaWeight = 0.00f;
    this->IKinemaSW = true;
    this->m_bUseLookAtLocationUpdateInterval = false;
    this->m_LookAtLocationUpdateInterval = 0.30f;
    this->m_LookAtLocationBufNum = 0;
}

