#include "EX355_SwingTractionVerticalInfo.h"

FEX355_SwingTractionVerticalInfo::FEX355_SwingTractionVerticalInfo() {
    this->iNotifyID = 0;
    this->TractionDir = EEX355_SwingTractionDir_Both;
    this->fMaxVerticalTractionDistance = 0.00f;
    this->TractionVelocityType = EEX355_MoveVelocityType_Constant;
    this->fTractionInterpExp = 0.00f;
    this->bNoTractionOnLand = false;
    this->fHeightFromLand = 0.00f;
}

