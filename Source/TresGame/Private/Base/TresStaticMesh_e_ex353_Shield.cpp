#include "TresStaticMesh_e_ex353_Shield.h"
#include "TresRootComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresStaticMeshComponent.h"

ATresStaticMesh_e_ex353_Shield::ATresStaticMesh_e_ex353_Shield() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresCharMesh"));
    this->MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->m_LockOnActorClass = NULL;
}

