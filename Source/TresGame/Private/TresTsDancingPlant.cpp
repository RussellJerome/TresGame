#include "TresTsDancingPlant.h"
#include "TresStaticMeshComponent.h"

ATresTsDancingPlant::ATresTsDancingPlant() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

