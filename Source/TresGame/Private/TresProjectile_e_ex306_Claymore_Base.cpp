#include "TresProjectile_e_ex306_Claymore_Base.h"
#include "Components/SceneComponent.h"
#include "TresProjectileMeshComponent_e_ex310.h"

void ATresProjectile_e_ex306_Claymore_Base::SpawnWave_OneColl(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw) {
}

void ATresProjectile_e_ex306_Claymore_Base::SpawnWave(int32 InParam, bool bOwnerLoc, FVector inOwnerLoc, bool bOwnerYaw, float inOwnerYaw) {
}

bool ATresProjectile_e_ex306_Claymore_Base::IsShutDownCalled() {
    return false;
}

bool ATresProjectile_e_ex306_Claymore_Base::IsGroundHit(FHitResult inHit) const {
    return false;
}


void ATresProjectile_e_ex306_Claymore_Base::BpDoDisableAttackColl() {
}

ATresProjectile_e_ex306_Claymore_Base::ATresProjectile_e_ex306_Claymore_Base() {
    this->MyRot = CreateDefaultSubobject<USceneComponent>(TEXT("TresProjectileRotCmp0"));
    this->MyMesh = CreateDefaultSubobject<UTresProjectileMeshComponent_e_ex310>(TEXT("TresProjectileMeshCmp0"));
    this->m_NoDestroyOnImpact = false;
}

