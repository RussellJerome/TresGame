#include "TresBodyCollComponent.h"

class UTresBodyCollPrimitive;
class AActor;
class UPrimitiveComponent;

void UTresBodyCollComponent::OnBodyEndOverlap(UTresBodyCollPrimitive* MyPrim, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresBodyCollComponent::OnBodyBeginOverlap(UTresBodyCollPrimitive* MyPrim, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UTresBodyCollComponent::UTresBodyCollComponent() {
    this->m_bEnableTeamCheck = true;
    this->m_bCreatePhysAssetCollision = false;
    this->m_bCanbeRidePhysAssetCollision = false;
    this->m_BaseAsset = NULL;
}

