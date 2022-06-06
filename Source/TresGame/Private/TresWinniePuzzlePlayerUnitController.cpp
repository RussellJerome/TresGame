#include "TresWinniePuzzlePlayerUnitController.h"

UTresWinniePuzzlePlayerUnitController::UTresWinniePuzzlePlayerUnitController() {
    this->EnableAppearPerform = false;
    this->SpawnAppearParticle = false;
    this->AppearDistance = 0.00f;
    this->AppearMoveSpeed = 0.00f;
    this->CopyUnitMoveWaitTime = 0.00f;
    this->PlayerUnitMoveDirectionParticle = NULL;
    this->ShowPlayerUnitUnmovableParticle = false;
    this->PlayerUnitUnmovableParticle = NULL;
}

