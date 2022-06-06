#include "TresWinniePuzzleSlopeActionController.h"

UTresWinniePuzzleSlopeActionController::UTresWinniePuzzleSlopeActionController() {
    this->StickSlopingValidValue = 0.00f;
    this->UnitMovingSpeed = 0.00f;
    this->SlopeActionRemoveFindingTarget = WinniePuzzleSlopeActionRemoveFindingTarget::DontRemove;
    this->InvokeSlopeActionUntilNoMovableUnit = false;
    this->SlopePowerMax = 0.00f;
    this->IncreasingPowerPerUnit = 0.00f;
    this->InvokeSlopeActionStoreTimesMax = 0;
}

