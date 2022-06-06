#include "TresShapeLayoutObjectBase.h"
#include "TresSpawnActorManagerComponent.h"

ATresShapeLayoutObjectBase::ATresShapeLayoutObjectBase() {
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
}

