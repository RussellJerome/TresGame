#include "TresPlacePrizeBase.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"

class AActor;
class UActorComponent;
class ATresCharPawnBase;

void ATresPlacePrizeBase::TresAddComponent(TSubclassOf<UActorComponent> Class, const FTransform& Transform, UActorComponent*& Out) {
}

void ATresPlacePrizeBase::SetCompWork(bool isWork, UActorComponent* comp) {
}

void ATresPlacePrizeBase::RecoveryHpMp(ATresCharPawnBase* Actor, int32 InHpRecoveryPoint, int32 InMpRecoveryPoint, ETresCmnCureEffectGrpID InEffect) {
}

AActor* ATresPlacePrizeBase::PlacePrizeSpawnActor(const FTresSpawnActorData& SpawnData, float overrideRadius) {
    return NULL;
}

bool ATresPlacePrizeBase::IsHit() {
    return false;
}

void ATresPlacePrizeBase::HitActor(AActor* Actor, FVector Offset) {
}

float ATresPlacePrizeBase::GetDelta() {
    return 0.0f;
}


void ATresPlacePrizeBase::DestroyPlacePrize() {
}

void ATresPlacePrizeBase::CallUserConstructionScript() {
}






ATresPlacePrizeBase::ATresPlacePrizeBase() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CollectionMovementClass = NULL;
    this->OverrideSphereRadius_ = 300.00f;
    this->DisableComponentRadius_ = 30000.00f;
}

