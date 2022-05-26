#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresSkeletalMeshComponent.h"
#include "TresGumiShipWeaponSequence.h"
#include "Components/SceneComponent.h"
#include "TresGumiShipEffectSetComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipSpecialWeaponBaseActor::_OnRequestPause(const bool bIn) {
}

void ATresGumiShipSpecialWeaponBaseActor::_OnFinishedAppearConnection() {
}

void ATresGumiShipSpecialWeaponBaseActor::_OnComponentEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex) {
}

void ATresGumiShipSpecialWeaponBaseActor::_OnComponentBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

void ATresGumiShipSpecialWeaponBaseActor::_OnChangeSpPoint(const float fOldPoint, const float fNewPoint, const float fRatio) {
}

void ATresGumiShipSpecialWeaponBaseActor::_CheckAttackTerm(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, bool& rbCanAttack) {
}

ATresGumiShipSpecialWeaponBaseActor::ATresGumiShipSpecialWeaponBaseActor() {
    this->m_pWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("WeaponSequence"));
    this->m_pMeshBasePoint = CreateDefaultSubobject<USceneComponent>(TEXT("MeshBasePoint"));
    this->m_pSkeltalWeaponMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("SkeltalMeshR"));
    this->m_pEffectSet = CreateDefaultSubobject<UTresGumiShipEffectSetComponent>(TEXT("SetEffect"));
    this->m_fAppearDelayTime = 0.00f;
    this->m_fReAppearDelayTime = 0.00f;
}

