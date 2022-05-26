#include "TresWinniePuzzlePlayerUnitControllerBase.h"

UTresWinniePuzzlePlayerUnitControllerBase::UTresWinniePuzzlePlayerUnitControllerBase() {
    this->SpawnUnitNum = 0;
    this->UnitMoveSpeed = 0.00f;
    this->UnitMoveWaitTime = 0.00f;
    this->UnitMoveWaitTimeForStrike = 0.00f;
    this->UnitSwitchMoveSpeed = 0.00f;
    this->UnitSwitchMoveHeight = 0.00f;
    this->GhostUnitParticle = NULL;
    this->PlayerUnitMovingLocusParticle = NULL;
    this->IsUpdateUnitRotation = false;
}

