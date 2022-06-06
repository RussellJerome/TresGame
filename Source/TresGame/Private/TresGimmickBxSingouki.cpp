#include "TresGimmickBxSingouki.h"
#include "TresPoleComponent.h"
#include "Components/SceneComponent.h"
#include "TresStaticMeshComponent.h"

class AController;
class UPrimitiveComponent;
class AActor;

void ATresGimmickBxSingouki::TresTakeDamageSingouki(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser) {
}

void ATresGimmickBxSingouki::SetManualColor(bool bManual, ETresGimmickBxSingoukiColorType Color) {
}



void ATresGimmickBxSingouki::ComponentHitSingouki(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool ATresGimmickBxSingouki::BreakSignal_Implementation() {
    return false;
}

ATresGimmickBxSingouki::ATresGimmickBxSingouki() {
    this->SingoukiRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SingoukiRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->PoleComp = CreateDefaultSubobject<UTresPoleComponent>(TEXT("PoleComp"));
    this->BreakEffect = NULL;
    this->BlueTime = 20.00f;
    this->RedTime = 20.00f;
    this->OnlyVisual = false;
    this->DisableCollision = false;
}

