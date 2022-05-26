#include "TresGumiShipGimmickCharaBase.h"
#include "TresSkeletalMeshComponent.h"

float ATresGumiShipGimmickCharaBase::PlayAnimByAnimSet(FName AnimName, FName SlotName, float fBlendInTime, int32 dFlags, int32 dEffectGroup, float fPlayRate, const FVector2D& rvRootTransScale) {
    return 0.0f;
}

bool ATresGumiShipGimmickCharaBase::IsAnimEnd(const FName SlotName) const {
    return false;
}

float ATresGumiShipGimmickCharaBase::GetAnimCurrentTime(const FName SlotName) const {
    return 0.0f;
}

FName ATresGumiShipGimmickCharaBase::GetAnimCurrentName(const FName SlotName) const {
    return NAME_None;
}

float ATresGumiShipGimmickCharaBase::GetAnimCurrentLength(const FName SlotName) const {
    return 0.0f;
}

ATresGumiShipGimmickCharaBase::ATresGumiShipGimmickCharaBase() {
    this->m_pSkeletalMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

