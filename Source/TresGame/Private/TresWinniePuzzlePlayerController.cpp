#include "TresWinniePuzzlePlayerController.h"

UTresWinniePuzzlePlayerController::UTresWinniePuzzlePlayerController() {
    this->InitialStayDirection = WinniePlayerStayDirection::StayNorth;
    this->RollOutEndOffsetXNorth = 0.00f;
    this->RollOutEndOffsetXSouth = 0.00f;
    this->RollOutEndOffsetYWest = 0.00f;
    this->RollOutEndOffsetYEast = 0.00f;
    this->StrikeParticle = NULL;
}

