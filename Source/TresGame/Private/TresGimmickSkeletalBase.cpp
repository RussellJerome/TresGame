#include "TresGimmickSkeletalBase.h"
#include "TresSkeletalMeshComponent.h"
#include "TresRootComponent.h"
#include "TresEffectAttachComponent.h"

class USQEX_KBD_Component;
class UAnimationAsset;







USQEX_KBD_Component* ATresGimmickSkeletalBase::GetKBDComponent() const {
    return NULL;
}


bool ATresGimmickSkeletalBase::BP_IsAnimEnd(FName InSlotName) {
    return false;
}

void ATresGimmickSkeletalBase::BP_AnimStop(FName InSlotName) {
}

void ATresGimmickSkeletalBase::BP_AnimSetCurrentTime(float InTime, FName InSlotName) {
}

void ATresGimmickSkeletalBase::BP_AnimPlayAnimset(FName InAnimName, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup) {
}

void ATresGimmickSkeletalBase::BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup) {
}

float ATresGimmickSkeletalBase::BP_AnimGetCurrentTime(FName InSlotName) {
    return 0.0f;
}

void ATresGimmickSkeletalBase::_OnAnimStarted(UAnimationAsset* InAnimAsset) {
}

void ATresGimmickSkeletalBase::_OnAnimEnded(UAnimationAsset* InAnimAsset, bool bInterrupted) {
}

ATresGimmickSkeletalBase::ATresGimmickSkeletalBase() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresGimmickMesh0"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
    this->m_GltTrackType = GLTTYPE_NONE;
    this->m_LookAtRateMultiRate = 1.00f;
    this->m_LookAtParamA = 0.00f;
    this->m_GltLookAtType = GLTYPE_NONE;
}

