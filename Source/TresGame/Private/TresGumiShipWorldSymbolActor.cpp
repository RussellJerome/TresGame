#include "TresGumiShipWorldSymbolActor.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipWorldSymbolActor::OnLeaveGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipWorldSymbolActor::OnHitGoalVolume(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

void ATresGumiShipWorldSymbolActor::OnEnterGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipWorldSymbolActor::OnCancel() {
}

void ATresGumiShipWorldSymbolActor::LockWorldByBoss(bool LockEnable) {
}

void ATresGumiShipWorldSymbolActor::LockWorld(bool Locked) {
}

ETresGumiShipWorldSymbolID ATresGumiShipWorldSymbolActor::GetWorldMapID() {
    return ETresGumiShipWorldSymbolID::E_GM01_WS_HE;
}

bool ATresGumiShipWorldSymbolActor::CheckLanding() {
    return false;
}

ATresGumiShipWorldSymbolActor::ATresGumiShipWorldSymbolActor() {
    this->WorldMapID = ETresGumiShipWorldSymbolID::E_GM01_WS_HE;
    this->WorldCode = TRES_WCID_MAX;
    this->ApproachCollision = CreateDefaultSubobject<USphereComponent>(TEXT("GoalVolumeSphereCollision"));
    this->IconRadius = 55000.00f;
    this->MistRadius = 20000.00f;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->IsLocked = true;
    this->IsLockedByBoss = false;
    this->WorldIcon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WorldIconMesh"));
    this->WorldMist = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WorldMist"));
}

