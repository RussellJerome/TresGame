#include "TresEnemyPawn_e_ex301_PurgatoryDamageBox.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex301_PurgatoryDamageBox::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex301_PurgatoryDamageBox::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemyPawn_e_ex301_PurgatoryDamageBox::ATresEnemyPawn_e_ex301_PurgatoryDamageBox() {
    this->m_DamageStartTime = 0.00f;
    this->m_DamageIntervalTime = 3.00f;
    this->m_Damage = 1.00f;
    this->m_IsDestroyDamageBoxTime = 0.00f;
    this->m_GrandParticleData = NULL;
    this->MyDamageComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollision"));
}

