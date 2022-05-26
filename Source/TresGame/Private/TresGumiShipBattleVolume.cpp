#include "TresGumiShipBattleVolume.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

bool ATresGumiShipBattleVolume::IsAttachedMercunaNavVolume() const {
    return false;
}

float ATresGumiShipBattleVolume::GetEnemySpawnAreaRadius() const {
    return 0.0f;
}

ETresGumiShipBattleAreaState ATresGumiShipBattleVolume::GetBattleAreaState() const {
    return ETresGumiShipBattleAreaState::ACTIVE;
}

float ATresGumiShipBattleVolume::GetBattleAreaRadius() const {
    return 0.0f;
}

FVector ATresGumiShipBattleVolume::GetBattleAreaCenterPosition() const {
    return FVector{};
}

void ATresGumiShipBattleVolume::_OnLeaveEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipBattleVolume::_OnLeaveBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipBattleVolume::_OnEnterEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipBattleVolume::_OnEnterBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipBattleVolume::_OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData) {
}

ATresGumiShipBattleVolume::ATresGumiShipBattleVolume() {
    this->m_fEnemySpawnAreaRadius = 1000.00f;
    this->m_fEnemyDisappearTriggerRadiusRate = 1.25f;
    this->m_fNeedEnemyDisappearTime = 5.00f;
    this->m_pEnemySpawnAreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("EnemySpawnAreaCollision"));
    this->m_pBattleAreaCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BattleAreaCollision"));
}

