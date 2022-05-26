#include "TresGimmickBxStepBanAsset.h"
#include "TresStaticMeshComponent.h"

class AActor;

void ATresGimmickBxStepBanAsset::SetStepBanAssetOwnerActor(AActor* GimmickOwner) {
}


ATresGimmickBxStepBanAsset::ATresGimmickBxStepBanAsset() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

