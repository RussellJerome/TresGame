#include "TresMiRxPawn_e_ex761.h"
#include "TresGumiShipEffectSetComponent.h"

void ATresMiRxPawn_e_ex761::_OnLaserShutDown() {
}

ATresMiRxPawn_e_ex761::ATresMiRxPawn_e_ex761() {
    this->m_dCenterIndex = 0;
    this->m_dRightAndLeftIndex = 0;
    this->m_fRateOfDispel = 0.70f;
    this->m_fWarpAttackOffset = 800.00f;
    this->m_bWarpAttackWaitTime = 0.50f;
    this->m_fDelayMinTimeOfSecondLaser = 0.00f;
    this->m_fDelayMaxTimeOfSecondLaser = 0.00f;
    this->m_fDelayMinTimeOfSecondLaser2 = 0.00f;
    this->m_fDelayMaxTimeOfSecondLaser2 = 0.00f;
    this->m_fLaserOmenWaitTime = 0.70f;
    this->m_pEffectSet = CreateDefaultSubobject<UTresGumiShipEffectSetComponent>(TEXT("SetEffect"));
}

