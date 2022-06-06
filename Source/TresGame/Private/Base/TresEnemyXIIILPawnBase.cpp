#include "TresEnemyXIIILPawnBase.h"

void ATresEnemyXIIILPawnBase::OnDtorStateEvent_XIIIL(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyXIIILPawnBase::OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyXIIILPawnBase::IsPlayerStyleFinish() const {
    return false;
}

bool ATresEnemyXIIILPawnBase::IsPlayerShootLock() const {
    return false;
}

bool ATresEnemyXIIILPawnBase::IsPlayerDisneyMagic() const {
    return false;
}

bool ATresEnemyXIIILPawnBase::IsPlayerAttractionFlow() const {
    return false;
}

bool ATresEnemyXIIILPawnBase::IsEnableRevengeChain() const {
    return false;
}

int32 ATresEnemyXIIILPawnBase::GetRevengeChainNum() const {
    return 0;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastWaterCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastThunderCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastFireCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastCureCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastBlizzardCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastAttackMagicCommand() const {
    return 0.0f;
}

float ATresEnemyXIIILPawnBase::GetElapsedTimeSinceLastAeroCommand() const {
    return 0.0f;
}

FVector ATresEnemyXIIILPawnBase::GetCenterLocation() const {
    return FVector{};
}

ATresEnemyXIIILPawnBase::ATresEnemyXIIILPawnBase() {
    this->m_UniqueEffectDataAsset = NULL;
    this->m_bEnableRevengeChain = false;
}

