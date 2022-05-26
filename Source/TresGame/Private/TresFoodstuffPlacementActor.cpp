#include "TresFoodstuffPlacementActor.h"
#include "TresFoodstuffRootComponent.h"

ATresFoodstuffPlacementActor::ATresFoodstuffPlacementActor() {
    this->MyRootComponent = CreateDefaultSubobject<UTresFoodstuffRootComponent>(TEXT("SceneComponent0"));
}

