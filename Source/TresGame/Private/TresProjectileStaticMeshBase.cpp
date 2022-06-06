#include "TresProjectileStaticMeshBase.h"
#include "TresStaticMeshComponent.h"
#include "TresEffectAttachComponent.h"

ATresProjectileStaticMeshBase::ATresProjectileStaticMeshBase() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresProjectileStaticMesh0"));
    this->m_EffectAttach = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
    this->m_fVisibleDelay = 0.00f;
    this->m_RespawnCount = 1;
}

