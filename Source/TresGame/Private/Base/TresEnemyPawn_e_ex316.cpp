#include "TresEnemyPawn_e_ex316.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex316::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex316::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemyPawn_e_ex316::ATresEnemyPawn_e_ex316() {
    this->m_pro_DarkMineGeneratorClass = NULL;
    this->MyPullCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PullCollisionComponent0"));
    this->m_WarpActionData = NULL;
    this->m_DarkMineManager = NULL;
}

