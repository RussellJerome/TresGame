#include "TresEnemyToyActorRespawnBox.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresEnemyToyActorRespawnBox::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

ATresEnemyToyActorRespawnBox::ATresEnemyToyActorRespawnBox() {
    this->MyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box0"));
}

