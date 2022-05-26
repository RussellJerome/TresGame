#include "TresWinniePuzzlePlayerPawn.h"

ATresWinniePuzzlePlayerPawn::ATresWinniePuzzlePlayerPawn() {
    this->RestingIdlingPlayTimes = 0;
    this->WalkingRunningRotateRate = 0.00f;
    this->StartWalkingStickValue = 0.00f;
    this->WalkingSpeed = 0.00f;
    this->StartRunningStickValue = 0.00f;
    this->RunningSpeed = 0.00f;
    this->StartTurnStickValue = 0.00f;
    this->TurnSpeed = 0.00f;
    this->RollSpeed = 0.00f;
}

