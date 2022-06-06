#include "TresGumiShipPlayerMovementCompoBase.h"

class ATresGumiShipPlayerControllerBase;

void UTresGumiShipPlayerMovementCompoBase::_ReceiveInputRStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController) {
}

void UTresGumiShipPlayerMovementCompoBase::_ReceiveInputLStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void UTresGumiShipPlayerMovementCompoBase::_ReceiveInputLStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController) {
}

UTresGumiShipPlayerMovementCompoBase::UTresGumiShipPlayerMovementCompoBase() {
    this->m_pPlayer = NULL;
    this->m_pController = NULL;
}

