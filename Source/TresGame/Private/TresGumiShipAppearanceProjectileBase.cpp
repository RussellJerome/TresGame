#include "TresGumiShipAppearanceProjectileBase.h"
#include "TresStaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

ATresGumiShipAppearanceProjectileBase::ATresGumiShipAppearanceProjectileBase() {
    this->m_pAttachedEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Effect"));
    this->m_pStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("StaticMesh"));
    this->m_bDestroyWhenEffcetEnd = false;
}

