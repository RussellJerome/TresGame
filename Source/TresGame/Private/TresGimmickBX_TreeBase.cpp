#include "TresGimmickBX_TreeBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickBX_TreeBase::ATresGimmickBX_TreeBase() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
}

