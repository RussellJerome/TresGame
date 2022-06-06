#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipAtkCollisionSetCompo.h"
#include "TresSkeletalMeshComponent.h"
#include "TresGumiShipBodyCollisionSetCompo.h"
#include "Components/SceneComponent.h"
#include "TresGumiShipWeaponSequence.h"
#include "TresEffectAttachComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipCharaPawnBase::SetVisibility(const bool bIn) {
}

void ATresGumiShipCharaPawnBase::SetMeshFadeRate(float fFadeRate, bool bCheckVisibility) {
}

void ATresGumiShipCharaPawnBase::SetInvincible(const bool bIn) {
}

void ATresGumiShipCharaPawnBase::SetEnableReaction(bool bIn) {
}

int32 ATresGumiShipCharaPawnBase::SetEffectGroupID(int32 GroupID) {
    return 0;
}

void ATresGumiShipCharaPawnBase::SetBodyCollisionEnable(const bool bIn, const bool bForce) {
}

bool ATresGumiShipCharaPawnBase::IsInvincible() const {
    return false;
}

bool ATresGumiShipCharaPawnBase::IsDead() const {
    return false;
}

bool ATresGumiShipCharaPawnBase::IsCinematicMode() const {
    return false;
}

FHitResult ATresGumiShipCharaPawnBase::GetLastHitResult() const {
    return FHitResult{};
}

float ATresGumiShipCharaPawnBase::GetHPRatio() const {
    return 0.0f;
}

int32 ATresGumiShipCharaPawnBase::GetHPMax() const {
    return 0;
}

int32 ATresGumiShipCharaPawnBase::GetHP() const {
    return 0;
}

bool ATresGumiShipCharaPawnBase::BP_IsAnimEnd(FName SlotName) const {
    return false;
}

float ATresGumiShipCharaPawnBase::BP_GetAnimCurrentTime(FName SlotName) const {
    return 0.0f;
}

void ATresGumiShipCharaPawnBase::BP_AnimStop(float fBlendOut, FName SlotName) {
}

float ATresGumiShipCharaPawnBase::BP_AnimPlay(FName AnimName, bool bIsLoop) {
    return 0.0f;
}








void ATresGumiShipCharaPawnBase::_OnHitComponent(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

void ATresGumiShipCharaPawnBase::_OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

ATresGumiShipCharaPawnBase::ATresGumiShipCharaPawnBase() {
    this->m_pCameraBasePoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraBasePoint"));
    this->m_pMeshBasePoint = CreateDefaultSubobject<USceneComponent>(TEXT("MeshBasePoint"));
    this->m_pSkeletalMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->m_pBodyCollision = CreateDefaultSubobject<UTresGumiShipBodyCollisionSetCompo>(TEXT("BodyCollision"));
    this->m_pAtkComllision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("AtkCollision"));
    this->m_pWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("WeaponSequence"));
    this->m_pEffectAttach = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("EffectAttach"));
}

