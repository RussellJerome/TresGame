#include "TresWinniePuzzleBoundStyleParam.h"

FTresWinniePuzzleBoundStyleParam::FTresWinniePuzzleBoundStyleParam() {
    this->StartMoveDirection = WinniePuzzleBoundStartMoveDirection::UpLeft;
    this->MoveStartColumn = 0;
    this->MoveEndColumnNumDiff = 0;
    this->EntryRow = 0;
    this->EntryColumn = 0;
    this->FirstTargetRow = 0;
    this->BoundTimes = 0;
}

