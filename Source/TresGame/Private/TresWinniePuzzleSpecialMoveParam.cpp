#include "TresWinniePuzzleSpecialMoveParam.h"

FTresWinniePuzzleSpecialMoveParam::FTresWinniePuzzleSpecialMoveParam() {
    this->UseSpecialMove = false;
    this->InvokeClusterMinUnitsNum = 0;
    this->P1DistanceFromStartMin = 0.00f;
    this->P1DistanceFromStartMax = 0.00f;
    this->MoveAngleRangeStartValue = 0.00f;
    this->MoveAngleRangeEndValue = 0.00f;
    this->MoveSpeed = 0.00f;
    this->MoveLocusParticle = NULL;
}

