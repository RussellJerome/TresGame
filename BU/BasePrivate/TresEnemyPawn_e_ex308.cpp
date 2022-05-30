#include "TresEnemyPawn_e_ex308.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex308::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex308::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATresEnemyPawn_e_ex308::IsDuringWarpCutCooldown_Phase2() {
    return false;
}

bool ATresEnemyPawn_e_ex308::IsDuringPhantomBlitzCooldown() {
    return false;
}

void ATresEnemyPawn_e_ex308::DebugSetNumWarpCut(int32 Num) {
}

void ATresEnemyPawn_e_ex308::DebugSetEnableDrawPullCollision(int32 Enable) {
}

ATresEnemyPawn_e_ex308::ATresEnemyPawn_e_ex308() {
    this->m_WarpFadeInterpTime = 0.20f;
    this->m_bEnableRevengeVoice2D = 1;
    this->MyPullCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PullCollisionComponent0"));
}

