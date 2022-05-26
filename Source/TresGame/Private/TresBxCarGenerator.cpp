#include "TresBxCarGenerator.h"

void ATresBxCarGenerator::SetEnableCreateCars(bool Enable) {
}

ATresBxCarGenerator::ATresBxCarGenerator() {
    this->CarDataAsset = NULL;
    this->splineActor = NULL;
    this->CarSpeed = 1500.00f;
    this->CarAccelSpeed = 3000.00f;
    this->CurveCarSpeed = 500.00f;
    this->HighSpeedRate = 2.00f;
    this->GenerateMaxNum = 10;
    this->CarSpanMin = 500.00f;
    this->CarSpanMax = 1000.00f;
    this->CarSpeedRandomRange = 0.00f;
}

