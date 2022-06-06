#include "TresWinniePuzzleUnitController.h"

UTresWinniePuzzleUnitController::UTresWinniePuzzleUnitController() {
    this->AppearDistance = 0.00f;
    this->AppearMoveSpeed = 0.00f;
    this->AppearWaitTime = 0.00f;
    this->AppearDelayType = WinniePuzzleUnitAppearDelayType::None;
    this->AppearDelayTime = 0.00f;
    this->AppearColumnDependencyDirection = WinniePuzzleUnitAppearColumnDependencyDirection::FrontToBack;
    this->AppearDelayTimeStart = 0.00f;
    this->AppearDelayTimeEnd = 0.00f;
    this->GrowParticle = NULL;
    this->UnitsMatchingParticle = NULL;
    this->GotoFillUnitsPhaseWaitTimeFromStartRemovingMove = 0.00f;
    this->FillType = WinniePuzzleUnitFillType::RollOver;
    this->FillDistance = 0.00f;
    this->FillMoveSpeed = 0.00f;
    this->SpawnFilledUnitsWaitTime = 0.00f;
    this->SameKindUnitRemovingDelayTimeCorrectionValue = 0.00f;
    this->RemovedUnitsNumMax = 0;
    this->ComboOccurrenceDifficulty = 0;
    this->UseSpecialRemovingCondition = false;
    this->CollisionActorRef = NULL;
}

