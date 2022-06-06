#include "TresEnemyFortressFloorActor_e_ex011.h"
#include "Components/BoxComponent.h"

ATresEnemyFortressFloorActor_e_ex011::ATresEnemyFortressFloorActor_e_ex011() {
    this->FloorBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("FloorBoxComponent"));
}

