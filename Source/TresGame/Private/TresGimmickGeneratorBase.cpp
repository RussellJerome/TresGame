#include "TresGimmickGeneratorBase.h"
#include "TresRootComponent.h"

class UStaticMeshComponent;

void ATresGimmickGeneratorBase::SetStaticMeshParameter(UStaticMeshComponent* MeshComponent) {
}

ATresGimmickGeneratorBase::ATresGimmickGeneratorBase() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

