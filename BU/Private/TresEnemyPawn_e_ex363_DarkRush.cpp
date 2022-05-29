#include "TresEnemyPawn_e_ex363_DarkRush.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex363_DarkRush::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex363_DarkRush::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemyPawn_e_ex363_DarkRush::ATresEnemyPawn_e_ex363_DarkRush() {
    this->m_BulletProjectile = NULL;
    this->m_LoopBulletProjectile = NULL;
    this->m_DarkTornadoParticleData = NULL;
    this->MySuctionWindComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SuctionWindCollision0"));
    this->m_DarkTornadoOffsetZ = 0.00f;
    this->m_WaterSplineClass = NULL;
    this->m_NotWindRange = 0.00f;
    this->m_WindForce = 0.00f;
    this->m_StrongWindDist = 0.00f;
    this->m_StrongWindForce = 0.00f;
    this->m_DarkTornadoStartTime = 0.00f;
    this->m_DarkRushCamHitActorData = NULL;
    this->m_DarkRushCamHitActorOffsetZ = 0.00f;
    this->m_NotHitTime = 0.00f;
    this->m_DarkTornadoParticle = NULL;
    this->m_DarkCircleBullet = NULL;
    this->m_DurkRushCamHitActor = NULL;
    this->m_MyParent = NULL;
    this->m_MyTarget = NULL;
}

