#include "TresGumiShipEnemy623Parts.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipEnemy623Parts::OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

ATresGumiShipEnemy623Parts::ATresGumiShipEnemy623Parts() {
    this->DockID = -1;
    this->HP = 1000.00f;
    this->TriggerTimer = 1.00f;
    this->AttackInterval = 2.00f;
    this->ResurrectionTimeMin = 15.00f;
    this->RadiusT = 600.00f;
    this->AngSpeedT = -30.00f;
    this->TriangleInterval = 1.00f;
    this->RadiusL = 600.00f;
    this->AngSpeedL = 180.00f;
    this->RadiusS = 400.00f;
    this->AngSpeedS = 180.00f;
    this->RadiusA = 1000.00f;
    this->OmegaA = 60.00f;
    this->RateA = 0.60f;
}

