#include "TresEnemyPawn_e_ex781_EnergyBreakBeam.h"
#include "Components/CapsuleComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex781_EnergyBreakBeam::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex781_EnergyBreakBeam::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemyPawn_e_ex781_EnergyBreakBeam::ATresEnemyPawn_e_ex781_EnergyBreakBeam() {
    this->MySuctionWindComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SuctionWindCollision0"));
    this->m_WaterSplineClass = NULL;
    this->m_OverlapCharPawn = NULL;
}

