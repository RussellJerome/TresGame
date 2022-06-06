#include "TresGimmickSimpleSkeletalBase.h"
#include "TresSkeletalMeshComponent.h"

class UAnimationAsset;



bool ATresGimmickSimpleSkeletalBase::BP_IsAnimEnd(FName InSlotName) {
    return false;
}

void ATresGimmickSimpleSkeletalBase::BP_AnimStop(FName InSlotName) {
}

void ATresGimmickSimpleSkeletalBase::BP_AnimSetCurrentTime(float InTime, FName InSlotName) {
}

void ATresGimmickSimpleSkeletalBase::BP_AnimPlayAnimset(FName InAnimName, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup) {
}

void ATresGimmickSimpleSkeletalBase::BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup) {
}

float ATresGimmickSimpleSkeletalBase::BP_AnimGetCurrentTime(FName InSlotName) {
    return 0.0f;
}

void ATresGimmickSimpleSkeletalBase::_OnAnimStarted(UAnimationAsset* InAnimAsset) {
}

void ATresGimmickSimpleSkeletalBase::_OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted) {
}

ATresGimmickSimpleSkeletalBase::ATresGimmickSimpleSkeletalBase() {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresGimmickMesh0"));
    this->m_IsGimmickClipDitherParamInvert = false;
}

