#include "TresHopActor.h"
#include "Components/SceneComponent.h"
#include "TresHopComponent.h"
#include "Components/BoxComponent.h"

void ATresHopActor::SetEnable(bool bEnable) {
}

bool ATresHopActor::IsEnable() const {
    return false;
}

ATresHopActor::ATresHopActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->MyHop = CreateDefaultSubobject<UTresHopComponent>(TEXT("TresRoot"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->CheckLength = 150.00f;
    this->CheckRange = 100.00f;
    this->HopID = -1;
}

