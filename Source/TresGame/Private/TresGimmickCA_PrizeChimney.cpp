#include "TresGimmickCA_PrizeChimney.h"

bool ATresGimmickCA_PrizeChimney::TryActivateChimneyGimmick(bool bResetHitPoint) {
    return false;
}


bool ATresGimmickCA_PrizeChimney::IsHitPointZero() const {
    return false;
}

bool ATresGimmickCA_PrizeChimney::IsActivatedGimmick() const {
    return false;
}

int32 ATresGimmickCA_PrizeChimney::GetHitPoint() const {
    return 0;
}

void ATresGimmickCA_PrizeChimney::DeactivateChimneyGimmick() {
}

ATresGimmickCA_PrizeChimney::ATresGimmickCA_PrizeChimney() {
    this->m_GroupOwner = NULL;
    this->m_SmokeParticleAsset = NULL;
    this->m_SmokeFinishParticleAsset = NULL;
    this->m_SmokeParticleComponent = NULL;
}

