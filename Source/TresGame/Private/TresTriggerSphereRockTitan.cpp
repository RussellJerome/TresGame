#include "TresTriggerSphereRockTitan.h"

ATresTriggerSphereRockTitan::ATresTriggerSphereRockTitan() {
    this->m_LinkPawn = NULL;
    this->m_DetectTag = TEXT("AFRC_Marker");
    this->m_TimerInterval = 0.00f;
    this->m_SendParam1 = 0;
    this->m_SendParam2 = 0.00f;
}

