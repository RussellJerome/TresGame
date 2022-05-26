#include "TresGumiShipPrizeBox.h"
#include "GameFramework/ProjectileMovementComponent.h"

ATresGumiShipPrizeBox::ATresGumiShipPrizeBox() {
    this->RollingDistance = 10000.00f;
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
    this->RespawnTime = 1.00f;
    this->RespawnDistance = 10000.00f;
}

