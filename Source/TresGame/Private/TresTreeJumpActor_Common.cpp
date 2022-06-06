#include "TresTreeJumpActor_Common.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresTreeJumpActor_Common::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresTreeJumpActor_Common::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresTreeJumpActor_Common::ATresTreeJumpActor_Common() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent1"));
    this->bRefreshNavLink = false;
}

