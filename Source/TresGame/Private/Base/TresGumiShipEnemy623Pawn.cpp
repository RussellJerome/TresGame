#include "TresGumiShipEnemy623Pawn.h"

void ATresGumiShipEnemy623Pawn::SetALSPhase(int32 phase) {
}

int32 ATresGumiShipEnemy623Pawn::GetALSPhase() const {
    return 0;
}

void ATresGumiShipEnemy623Pawn::CancelAttack() {
}

ATresGumiShipEnemy623Pawn::ATresGumiShipEnemy623Pawn() {
    this->MotionMode = 0;
    this->Locked = false;
    this->HeadRollSpeedMax = 360.00f;
    this->BottomRollSpeedMax = 360.00f;
    this->FalldownTime = 3.00f;
    this->FalldownSpeed = 100.00f;
    this->ALSSwitchingTime = 10.00f;
    this->OriginalBGM = NULL;
    this->ArrangeBGM = NULL;
    this->MonitorOriginalBGM = NULL;
    this->MonitorArrangeBGM = NULL;
}

