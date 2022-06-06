#include "TresProjectile_e_he903_Debris.h"
#include "Components/SceneComponent.h"

ATresProjectile_e_he903_Debris::ATresProjectile_e_he903_Debris() {
    this->m_BombMesh = NULL;
    this->m_BombMesh_Static = NULL;
    this->MyRot = CreateDefaultSubobject<USceneComponent>(TEXT("TresProjectileRotCmp0"));
    this->m_fRotAxisDeviation = 0.00f;
    this->m_fRotVel = 0.00f;
    this->m_fScaleTime = 0.00f;
    this->m_bReflectToOwner = false;
    this->m_bParticleRotSync = true;
}

