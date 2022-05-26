#include "TresGumiShipMeteoroGenerator.h"
#include "TresGumiShipAtkCollisionSetCompo.h"

ATresGumiShipMeteoroGenerator::ATresGumiShipMeteoroGenerator() {
    this->m_FixStartPos = false;
    this->m_pAtkComllision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("AtkCollision"));
    this->m_fDistance = 700.00f;
    this->m_fSpeed = 30.00f;
    this->m_fMinWaitTime = 2.00f;
    this->m_fMaxWaitTime = 5.00f;
    this->m_fMeteoroDispTimer = 0.40f;
    this->m_RotateAxis = 0;
    this->m_fMeteoTimer = 1.00f;
    this->m_fMeteoMaxScale = 10.00f;
}

