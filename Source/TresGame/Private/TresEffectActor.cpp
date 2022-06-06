#include "TresEffectActor.h"
#include "TresRootComponent.h"

void ATresEffectActor::ResetEffect(int32 in_GroupID) {
}

void ATresEffectActor::LoopEnd(int32 in_GroupID) {
}

void ATresEffectActor::FadeEffect(bool in_FadeOut, float in_FadeTime, int32 in_GroupID) {
}

void ATresEffectActor::ActivateEffect(bool in_Active, int32 in_GroupID) {
}

ATresEffectActor::ATresEffectActor() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

