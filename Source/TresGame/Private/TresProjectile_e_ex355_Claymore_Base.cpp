#include "TresProjectile_e_ex355_Claymore_Base.h"
#include "Components/SceneComponent.h"
#include "TresProjectileMeshComponent_e_ex359.h"

void ATresProjectile_e_ex355_Claymore_Base::SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw) {
}

void ATresProjectile_e_ex355_Claymore_Base::SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw) {
}

bool ATresProjectile_e_ex355_Claymore_Base::IsShutDownCalled() {
    return false;
}

bool ATresProjectile_e_ex355_Claymore_Base::IsImpactCalled() const {
    return false;
}

bool ATresProjectile_e_ex355_Claymore_Base::IsGroundHit(FHitResult inHit) const {
    return false;
}

void ATresProjectile_e_ex355_Claymore_Base::DoEnableAttackColl() {
}

void ATresProjectile_e_ex355_Claymore_Base::BpPostWaveSpawned() {
}


void ATresProjectile_e_ex355_Claymore_Base::BpDoDisableAttackColl() {
}

ATresProjectile_e_ex355_Claymore_Base::ATresProjectile_e_ex355_Claymore_Base() {
    this->MyRot = CreateDefaultSubobject<USceneComponent>(TEXT("TresProjectileRotCmp0"));
    this->MyMesh = CreateDefaultSubobject<UTresProjectileMeshComponent_e_ex359>(TEXT("TresProjectileMeshCmp0"));
    this->m_NoDestroyOnImpact = false;
    this->m_bIgnorWaveHitAfterProjectileHit = false;
    this->m_AuraEffectClass = NULL;
    this->m_AuraEffectComp = NULL;
    this->m_fParticleStartDelayTime = 0.00f;
    this->m_bParticleStartDelayTime = false;
}

