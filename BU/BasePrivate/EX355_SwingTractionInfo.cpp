#include "EX355_SwingTractionInfo.h"

FEX355_SwingTractionInfo::FEX355_SwingTractionInfo() {
    this->iNotifyID = 0;
    this->TractionDir = EEX355_SwingTractionHorizontalDir_Both;
    this->bPawnRotAsDir = false;
    this->fMaxHorizontalTractionDistance = 0.00f;
    this->TractionVelocityType = EEX355_MoveVelocityType_Constant;
    this->fTractionInterpExp = 0.00f;
    this->bNoTractionOnLand = false;
    this->fHeightFromLand = 0.00f;
}

