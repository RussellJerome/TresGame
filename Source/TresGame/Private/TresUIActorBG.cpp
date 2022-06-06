#include "TresUIActorBG.h"
#include "Components/StaticMeshComponent.h"

ATresUIActorBG::ATresUIActorBG() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

