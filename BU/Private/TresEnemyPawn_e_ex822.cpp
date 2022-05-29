#include "TresEnemyPawn_e_ex822.h"
#include "Components/CapsuleComponent.h"

ATresEnemyPawn_e_ex822::ATresEnemyPawn_e_ex822() {
    this->MySuctionWindComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SuctionWindCollision0"));
    this->MyBlowOffWindComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BlowOffWindCollision0"));
}

