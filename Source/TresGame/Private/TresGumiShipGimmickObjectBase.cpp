#include "TresGumiShipGimmickObjectBase.h"
#include "Components/SceneComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresGumiShipBodyCollisionSetCompo.h"
#include "TresGumiShipWeaponSequence.h"

class USQEX_ParticleAttachDataAsset;
class UPrimitiveComponent;
class AActor;

void ATresGumiShipGimmickObjectBase::SetVisibility(const bool bIn) {
}

void ATresGumiShipGimmickObjectBase::SetMeshFadeRate(float fFadeRate, bool bCheckVisibility) {
}

void ATresGumiShipGimmickObjectBase::SetInvincible(const bool bIn) {
}

void ATresGumiShipGimmickObjectBase::SetEffectAttach(const int32 dGloup) {
}

void ATresGumiShipGimmickObjectBase::SetEffect(USQEX_ParticleAttachDataAsset* pAttachData, int32 dGroupID, bool bUseDesignatedData) {
}

void ATresGumiShipGimmickObjectBase::SetBodyCollisionEnable(const bool bIn, const bool bForce) {
}

void ATresGumiShipGimmickObjectBase::ReleaseWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort) {
}

void ATresGumiShipGimmickObjectBase::PullWeaponTrigger(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, const bool bManual) {
}

bool ATresGumiShipGimmickObjectBase::IsInvincible() const {
    return false;
}

bool ATresGumiShipGimmickObjectBase::IsDead() const {
    return false;
}




void ATresGumiShipGimmickObjectBase::_OnRootHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

void ATresGumiShipGimmickObjectBase::_OnBodyHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

void ATresGumiShipGimmickObjectBase::_InitializeHP(const int32 dMaxHp) {
}

ATresGumiShipGimmickObjectBase::ATresGumiShipGimmickObjectBase() {
    this->m_pMeshBase = CreateDefaultSubobject<USceneComponent>(TEXT("MeshBase"));
    this->m_pStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("StaticMesh"));
    this->m_pBodyCollision = CreateDefaultSubobject<UTresGumiShipBodyCollisionSetCompo>(TEXT("BodyCollision"));
    this->m_pWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("WeaponSequence"));
}

