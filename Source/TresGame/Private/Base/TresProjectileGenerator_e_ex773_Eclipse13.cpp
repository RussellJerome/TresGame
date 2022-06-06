#include "TresProjectileGenerator_e_ex773_Eclipse13.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"

float ATresProjectileGenerator_e_ex773_Eclipse13::GetWaitTime() {
    return 0.0f;
}


ATresProjectileGenerator_e_ex773_Eclipse13::ATresProjectileGenerator_e_ex773_Eclipse13() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
    this->MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticle"));
    this->ParameterAsset = NULL;
    this->ShootTime = 0.00f;
    this->GeneratorIndex = -1;
}

