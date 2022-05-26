#include "TresGimmickTsBouncyPet.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "TresHopComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresGimmickTsBouncyPet::SetBouncyVisible(bool Visible) {
}

void ATresGimmickTsBouncyPet::SetBouncyEnable(bool Enable) {
}

void ATresGimmickTsBouncyPet::SetActingBouncy(bool Enable) {
}

void ATresGimmickTsBouncyPet::ReplaceBouncy() {
}

void ATresGimmickTsBouncyPet::OnSensorEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresGimmickTsBouncyPet::OnSensorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATresGimmickTsBouncyPet::IsInvisibleBouncy() const {
    return false;
}

bool ATresGimmickTsBouncyPet::IsAreaTimeOut() const {
    return false;
}

FVector ATresGimmickTsBouncyPet::GetSensorLocation() const {
    return FVector{};
}

ATresGimmickTsBouncyPet::ATresGimmickTsBouncyPet() {
    this->SideCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideCollision"));
    this->SphereBlockWorldUnique = CreateDefaultSubobject<USphereComponent>(TEXT("SphereBlockWorldUnique"));
    this->CancelComp = CreateDefaultSubobject<USceneComponent>(TEXT("EntryTrigger"));
    this->EnableSensor = CreateDefaultSubobject<USphereComponent>(TEXT("EnableSensor"));
    this->TresHop = CreateDefaultSubobject<UTresHopComponent>(TEXT("TresHop"));
    this->EnableSideCollision = false;
    this->SimulatePhysics = false;
    this->EnableHop = true;
    this->AreaEnableOutside = false;
}

