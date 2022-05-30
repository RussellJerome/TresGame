#include "EX355_RushAwayTurnInfo.h"

FEX355_RushAwayTurnInfo::FEX355_RushAwayTurnInfo() {
    this->iNotifyID = 0;
    this->fTurnVelocity = 0.00f;
    this->m_TurnType = EEX355_RushAwayTurnType_Destination;
    this->m_TurnDir = EEX355_RushAwayTurnDir_Default;
    this->m_fTurnOffset = 0.00f;
    this->m_fTurnDirDivideAngle = 0.00f;
}

