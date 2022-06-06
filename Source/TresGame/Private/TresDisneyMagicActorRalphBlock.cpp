#include "TresDisneyMagicActorRalphBlock.h"
#include "TresBodyCollComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresAtkCollComponent.h"

void ATresDisneyMagicActorRalphBlock::OnChangeGimmickPause(bool bPause) {
}

ATresDisneyMagicActorRalphBlock::ATresDisneyMagicActorRalphBlock() {
    this->m_BlockKind = RALPH_BLOCK_KIND_ONE;
    this->m_EffAssetExplosion = NULL;
    this->m_EffAssetDisappear = NULL;
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresDisneyMagicActorRalphBlockMesh0"));
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresDisneyMagicActorRalphBlockAtkColl"));
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresDisneyMagicActorRalphBlockBodyColl"));
    this->MyPenetrationEffectMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresDisneyMagicActorRalphBlockEffectMesh0"));
}

