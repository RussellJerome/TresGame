#include "TresGimmickBxSitugaiki.h"
#include "TresStaticMeshComponent.h"

void ATresGimmickBxSitugaiki::SetDisableLaunch(bool DisableLaunch) {
}

ATresGimmickBxSitugaiki::ATresGimmickBxSitugaiki() {
    this->m_PropellerMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresSitugaikiPropellerMesh"));
}

