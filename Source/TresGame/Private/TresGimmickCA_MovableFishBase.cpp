#include "TresGimmickCA_MovableFishBase.h"

class ASQEX_SplineActor;

void ATresGimmickCA_MovableFishBase::SetSplineActor(ASQEX_SplineActor* Actor, bool bAutoMoveStart) {
}

void ATresGimmickCA_MovableFishBase::SetSpeed(float Speed) {
}

void ATresGimmickCA_MovableFishBase::SetReverse(bool Reverse) {
}

void ATresGimmickCA_MovableFishBase::SetLoop(bool Loop) {
}

void ATresGimmickCA_MovableFishBase::SetEnableMove(bool bEnable) {
}


float ATresGimmickCA_MovableFishBase::GetSpeed() {
    return 0.0f;
}

ATresGimmickCA_MovableFishBase::ATresGimmickCA_MovableFishBase() {
    this->m_bEnableMove = false;
}

