#include "TresChrLauncherComponentBase.h"

class ATresCharPawnBase;

void UTresChrLauncherComponentBase::RemovePawnList(ATresCharPawnBase* pPawn) {
}

bool UTresChrLauncherComponentBase::AddPawnList(ATresCharPawnBase* pPawn) {
    return false;
}

UTresChrLauncherComponentBase::UTresChrLauncherComponentBase() {
    this->m_LaunchHeight = 2000.00f;
    this->m_JumpMode = TCLT_NORMAL;
}

