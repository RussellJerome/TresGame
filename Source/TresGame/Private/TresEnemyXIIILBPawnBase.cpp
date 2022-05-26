#include "TresEnemyXIIILBPawnBase.h"

FRotator ATresEnemyXIIILBPawnBase::GetWarpLocationEQSDotRotator() const {
    return FRotator{};
}

FRotator ATresEnemyXIIILBPawnBase::GetTargetVecEQSDotRotator() const {
    return FRotator{};
}

FRotator ATresEnemyXIIILBPawnBase::GetEQSDotRotator() const {
    return FRotator{};
}

void ATresEnemyXIIILBPawnBase::DebugSetDefaultBT() {
}

ATresEnemyXIIILBPawnBase::ATresEnemyXIIILBPawnBase() {
    this->m_WarpFadeInterpTime = 0.20f;
    this->m_bEnableRevengeVoice2D = false;
}

