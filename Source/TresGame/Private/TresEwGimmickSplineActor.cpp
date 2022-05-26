#include "TresEwGimmickSplineActor.h"

ATresEwGimmickSplineActor::ATresEwGimmickSplineActor() {
    this->AnimationAsset = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->InterpCompleteTime = 1.00f;
    this->bInitMoveSpeed = false;
    this->MoveSpeed = 700.00f;
    this->DirectionType = ETresGimmickEwDirectionType::Spline;
}

