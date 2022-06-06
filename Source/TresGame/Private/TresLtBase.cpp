#include "TresLtBase.h"
#include "Components/StaticMeshComponent.h"

ATresLtBase::ATresLtBase() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

