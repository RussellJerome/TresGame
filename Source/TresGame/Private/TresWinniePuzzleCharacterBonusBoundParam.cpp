#include "TresWinniePuzzleCharacterBonusBoundParam.h"

FTresWinniePuzzleCharacterBonusBoundParam::FTresWinniePuzzleCharacterBonusBoundParam() {
    this->MoveWaitTime = 0.00f;
    this->MoveHeightMin = 0.00f;
    this->MoveHeightMax = 0.00f;
    this->MoveSpeed = 0.00f;
    this->MoveDelayTimeCorrectionValue = 0.00f;
    this->WaitBoundAnimationTime = 0.00f;
    this->GotoFillUnitsPhaseWaitTime = 0.00f;
    this->UseSpecialMove = false;
    this->BoundParticle = NULL;
    this->DistanceWithBoundPointWhenSpawnBoundParticle = 0.00f;
}

