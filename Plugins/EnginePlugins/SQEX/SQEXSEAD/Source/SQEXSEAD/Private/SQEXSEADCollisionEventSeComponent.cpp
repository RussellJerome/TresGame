#include "SQEXSEADCollisionEventSeComponent.h"

class UPrimitiveComponent;
class AActor;

void USQEXSEADCollisionEventSeComponent::OnFracture(const FVector& HitPoint, const FVector& HitDirection) {
}

void USQEXSEADCollisionEventSeComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USQEXSEADCollisionEventSeComponent::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USQEXSEADCollisionEventSeComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USQEXSEADCollisionEventSeComponent::USQEXSEADCollisionEventSeComponent() {
    this->OnHitSoundAsset = NULL;
    this->OnPawnHitSoundAsset = NULL;
    this->HitDistanceThreshold = 10.00f;
    this->OnBeginOverlapSoundAsset = NULL;
    this->OnEndOverlapSoundAsset = NULL;
    this->bPawnOverlapOnly = true;
    this->OnFractureSoundAsset = NULL;
    this->MyMeshComponent = NULL;
    this->MyDestructibleComponent = NULL;
}

