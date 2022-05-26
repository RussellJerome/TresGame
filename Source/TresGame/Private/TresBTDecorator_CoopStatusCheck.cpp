#include "TresBTDecorator_CoopStatusCheck.h"

UTresBTDecorator_CoopStatusCheck::UTresBTDecorator_CoopStatusCheck() {
    this->m_CoopStatus = ETresCoopRunningStatus::Started;
    this->bReferenceFromTeam = true;
}

