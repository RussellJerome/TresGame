#include "TresGimmickHePuddingBase.h"
#include "Tres1dChainActorComponent.h"
#include "TresBodyCollPrimitive.h"
#include "TresLockonTargetComponent.h"
#include "Components/SphereComponent.h"

class UAnimationAsset;

void ATresGimmickHePuddingBase::SetDead(bool Set) {
}

bool ATresGimmickHePuddingBase::IsDead() const {
    return false;
}

void ATresGimmickHePuddingBase::Dead() {
}




void ATresGimmickHePuddingBase::BP_AnimPlayAnimAsset(UAnimationAsset* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, int32 InVoiceGroup) {
}

void ATresGimmickHePuddingBase::AddScore() {
}

ATresGimmickHePuddingBase::ATresGimmickHePuddingBase() {
    this->BodyCollPrimitiveComp = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("BodyCollPrimitive"));
    this->LockonTargetComp = CreateDefaultSubobject<UTresLockonTargetComponent>(TEXT("LockonTargetComp"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->Chain1dComponent = CreateDefaultSubobject<UTres1dChainActorComponent>(TEXT("Chain1dComponent"));
    this->Score = 0;
    this->LocalDelta = 0.00f;
    this->HitPointPerAttack = 20;
    this->MaxHitCount = 1;
    this->RestHitCount = 1;
}

