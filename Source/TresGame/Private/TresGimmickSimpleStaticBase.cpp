#include "TresGimmickSimpleStaticBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickSimpleStaticBase::ATresGimmickSimpleStaticBase() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->m_IsGimmickClipDitherParamInvert = false;
}

