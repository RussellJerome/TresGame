#include "TresGimmickBrickStaticExBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickBrickStaticExBase::ATresGimmickBrickStaticExBase() {
    this->MyBreak = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickBreakMesh0"));
}

