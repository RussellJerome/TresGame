#include "TresGimmickCA_TreeBase.h"

void ATresGimmickCA_TreeBase::StopPrizeShower() {
}

void ATresGimmickCA_TreeBase::StartPrizeShower(float InInterval) {
}

bool ATresGimmickCA_TreeBase::IsStartingPrizeShower() const {
    return false;
}

ATresGimmickCA_TreeBase::ATresGimmickCA_TreeBase() {
    this->m_SpawnPrizeNumOnHit = 1;
    this->m_SpawnPrizeIntervalOnHit = 0.00f;
}

