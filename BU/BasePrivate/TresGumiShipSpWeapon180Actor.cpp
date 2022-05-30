#include "TresGumiShipSpWeapon180Actor.h"
#include "TresGumiShipBodyCollisionSetCompo.h"
#include "TresGumiShipAtkCollisionSetCompo.h"

ATresGumiShipSpWeapon180Actor::ATresGumiShipSpWeapon180Actor() {
    this->PrimarySearchDistance = 10000.00f;
    this->Speed = 2000.00f;
    this->InitialHP = 20000;
    this->SearchTime = 1.00f;
    this->m_pBodyCollision = CreateDefaultSubobject<UTresGumiShipBodyCollisionSetCompo>(TEXT("BodyCollision"));
    this->m_pAtkComllision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("AtkCollision"));
}

