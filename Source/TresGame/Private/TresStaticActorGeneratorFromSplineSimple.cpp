#include "TresStaticActorGeneratorFromSplineSimple.h"
#include "TresSpawnActorManagerComponent.h"

class ASQEX_SplineActor;

void ATresStaticActorGeneratorFromSplineSimple::SetSplineActorNative(ASQEX_SplineActor* splineActor) {
}

void ATresStaticActorGeneratorFromSplineSimple::SetBuildTransformArray(const TArray<FTresSpawnActorDataForGenerator>& refSet) {
}

void ATresStaticActorGeneratorFromSplineSimple::RequestRebuild() {
}




ATresStaticActorGeneratorFromSplineSimple::ATresStaticActorGeneratorFromSplineSimple() {
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
    this->bDestroyAfterBeginPlay = true;
}

