#include "TresRemyCuttingFoodParam.h"

FTresRemyCuttingFoodParam::FTresRemyCuttingFoodParam() {
    this->FoodType = RemyCuttingFoodType::RemyCuttingOnion;
    this->FoodPawn = NULL;
    this->FoodMassStaticMeshActor = NULL;
    this->FoodSliceBending = 0.00f;
    this->FoodSliceJumpWaitTime = 0.00f;
    this->FoodSliceJumpWaitTimeLagRangeStart = 0.00f;
    this->FoodSliceJumpWaitTimeLagRangeEnd = 0.00f;
    this->FoodSliceJumpSpeedCoefficient = 0.00f;
    this->FoodClusterParticle = NULL;
    this->FoodClusterParticleCurveVector = NULL;
}

