#include "TresBxCar2TyreActor.h"
#include "Components/InstancedStaticMeshComponent.h"

ATresBxCar2TyreActor::ATresBxCar2TyreActor() {
    this->InstancedStaticMeshEx = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshExComponent"));
}

