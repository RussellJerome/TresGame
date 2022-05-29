#include "TresEnemyPawn_e_ex326.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyPawn_e_ex326::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresEnemyPawn_e_ex326::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresEnemyPawn_e_ex326::ATresEnemyPawn_e_ex326() {
    this->m_BulletProjectile = NULL;
    this->m_DarkTornadoParticleData = NULL;
    this->m_ArielComboFloorParticle = NULL;
    this->MySuctionWindComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SuctionWindCollision0"));
    this->m_WaterSplineClass = NULL;
    this->m_NotWindRange = 0.00f;
    this->m_WindForce = 0.00f;
    this->m_StrongWindDist = 0.00f;
    this->m_StrongWindForce = 0.00f;
    this->m_BulletShotTime = 0.50f;
    this->m_TargetShotTimerMax = 1.30f;
    this->m_BulletShotVariation = 300.00f;
    this->m_BulletTargetShotCount = 3;
    this->m_FinishBulletDegree = 45.00f;
    this->m_FinishBulletRange = 900.00f;
    this->m_FadeSpeed = 5.00f;
    this->m_OpacityFadeSpeed = 5.00f;
    this->m_OpacityFadeTime = 0.10f;
    this->m_DarkTornadoStartTime = 2.00f;
    this->m_DarkRushCamHitActorData = NULL;
    this->m_DarkRushCamHitActorOffsetZ = 0.00f;
    this->m_BuddyPawn = NULL;
    this->m_DarkTornadoParticle = NULL;
    this->m_DurkRushCamHitActor = NULL;
}

