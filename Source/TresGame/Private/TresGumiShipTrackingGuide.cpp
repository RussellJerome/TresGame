#include "TresGumiShipTrackingGuide.h"
#include "TresGumiShipFSM.h"

void ATresGumiShipTrackingGuide::GenerateRailSlideActor() {
}

ATresGumiShipTrackingGuide::ATresGumiShipTrackingGuide() {
    this->m_fTimeOfAddRailSlideActor = 0.50f;
    this->m_fSpeedOfDefaultMove = 2000.00f;
    this->m_pFSM = CreateDefaultSubobject<UTresGumiShipFSM>(TEXT("FSM"));
}

