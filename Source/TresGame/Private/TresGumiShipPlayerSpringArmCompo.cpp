#include "TresGumiShipPlayerSpringArmCompo.h"

class ATresGumiShipPlayerControllerBase;

void UTresGumiShipPlayerSpringArmCompo::_OnInputRStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

UTresGumiShipPlayerSpringArmCompo::UTresGumiShipPlayerSpringArmCompo() {
    this->m_bReversePitch = false;
    this->m_bReverseYaw = false;
    this->m_fPitchUpLimit = -80.00f;
    this->m_fPitchDownLimit = 30.00f;
    this->m_fTimeOfResetStart = 0.50f;
    this->m_fResetSpeed = 20.00f;
    this->m_fAutoResetSpeed = 5.00f;
    this->m_fDoResetRotationSpeed = 50.00f;
}

