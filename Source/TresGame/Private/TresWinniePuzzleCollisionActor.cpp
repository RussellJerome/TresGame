#include "TresWinniePuzzleCollisionActor.h"
#include "Components/SphereComponent.h"

ATresWinniePuzzleCollisionActor::ATresWinniePuzzleCollisionActor() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("USphereComponent"));
}

