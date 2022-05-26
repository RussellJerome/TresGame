#include "TresGumiShipTinyShip.h"

class ATresGumiShipPlayerControllerBase;

void ATresGumiShipTinyShip::SetFormations(ETresGumiShipTinyShipFormation Up, ETresGumiShipTinyShipFormation Right, ETresGumiShipTinyShipFormation Down, ETresGumiShipTinyShipFormation Left) {
}

void ATresGumiShipTinyShip::ResetLocation() {
}

void ATresGumiShipTinyShip::OnPressLeftRight(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

void ATresGumiShipTinyShip::OnInputLStick(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

ATresGumiShipTinyShip::ATresGumiShipTinyShip() {
    this->RollSpeedRate = 0.10f;
    this->OptionOffset.AddDefaulted(2);
    this->MaxAccel = 20.00f;
    this->MaxBrake = -2000.00f;
    this->MaxNAccel = 1000.00f;
    this->MaxNBrake = -4000.00f;
    this->NearRadius = 30.00f;
    this->NearVelocity = 80.00f;
    this->ResetDistance = -1000.00f;
    this->ResetVelocity = 10000.00f;
}

