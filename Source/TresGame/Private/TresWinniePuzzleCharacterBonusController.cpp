#include "TresWinniePuzzleCharacterBonusController.h"

UTresWinniePuzzleCharacterBonusController::UTresWinniePuzzleCharacterBonusController() {
    this->BonusType = WinniePuzzleCharacterBonusType::Tigger_Bound;
    this->BonusGaugeType = WinniePuzzleCharacterBonusGaugeType::Single;
    this->ForbidAutoInvocation = false;
    this->BonusGaugeMaxValue = 0.00f;
    this->BonusGaugeChangeRate = 0.00f;
    this->GaugeIncreaseEffectLifetime = 0.00f;
    this->InvokingLensEffect = NULL;
    this->InvokingLensEffectLoopEndWaitTime = 0.00f;
    this->ForceFeedbackGaugeMax1st = NULL;
    this->ForceFeedbackGaugeMax2nd = NULL;
}

