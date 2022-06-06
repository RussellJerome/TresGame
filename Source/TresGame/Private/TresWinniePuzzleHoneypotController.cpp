#include "TresWinniePuzzleHoneypotController.h"

UTresWinniePuzzleHoneypotController::UTresWinniePuzzleHoneypotController() {
    this->HoneypotRef = NULL;
    this->HighlightParticle = NULL;
    this->SpawnNumOnGameStart = 0;
    this->SpawnMaxNum = 0;
    this->SpawnNumOnGameStartOnChallengeMode = 0;
    this->SpawnMaxColumns = 0;
    this->SpawnInSameRow = false;
    this->StraightDropEndLocationX = 0.00f;
    this->StraightDropEndParticle = NULL;
    this->MoveHeightMinWhenDrop = 0.00f;
    this->MoveHeightMaxWhenDrop = 0.00f;
    this->MoveSpeedWhenDrop = 0.00f;
    this->FillDistance = 0.00f;
    this->MoveSpeedWhenFill = 0.00f;
    this->MovedParticleWhenFill = NULL;
}

