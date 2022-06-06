#include "TresAttractionPawnWaterRide.h"
#include "Components/SplineComponent.h"

bool ATresAttractionPawnWaterRide::IsFinishSlideBlockCollision(float InForwardDistance, float InRadius) {
    return false;
}

FRotator ATresAttractionPawnWaterRide::GetSlideRotation(float InForwardDistance) const {
    return FRotator{};
}

FVector ATresAttractionPawnWaterRide::GetSlideLocation(float InForwardDistance) const {
    return FVector{};
}

float ATresAttractionPawnWaterRide::GetFinishSlideDistance() const {
    return 0.0f;
}

float ATresAttractionPawnWaterRide::GetFinishLastDisRate() const {
    return 0.0f;
}

ATresAttractionPawnWaterRide::ATresAttractionPawnWaterRide() {
    this->m_RoadActorClass = NULL;
    this->m_AppearEff = NULL;
    this->m_EffAssetStart = NULL;
    this->m_GroundJumpEff = NULL;
    this->m_AirJumpEff = NULL;
    this->m_LandEff = NULL;
    this->m_FinishEff = NULL;
    this->m_Param_AppearMotionLagTime = 0.70f;
    this->m_Param_MeshSpawnDistance = 300.00f;
    this->m_Param_JumpFallGravityScale = 10.00f;
    this->m_Param_JumpMoveTurnSpeed = 90.00f;
    this->m_Param_MoveRate = 4.00f;
    this->m_Param_RoadSpeedRate = 0.50f;
    this->m_Param_RoadOnSpeed = -500.00f;
    this->m_Param_RoadOutSpeed = 1000.00f;
    this->m_Param_SlideBaseSpeed = 3000.00f;
    this->m_Param_SlideMaxSpeed = 5000.00f;
    this->m_Param_SlideMinSpeed = 2500.00f;
    this->m_Param_SlideAcc = 5000.00f;
    this->m_Param_FinishSlowDis = 0.00f;
    this->m_Param_FinishSlowNewTimeDilation = 0.10f;
    this->m_Param_FinishSlowInterpTime = 0.00f;
    this->m_Param_FinishSlowTime = 0.10f;
    this->m_Camera = NULL;
    this->m_RoadActor = NULL;
    this->m_pEffStart = NULL;
    this->m_Spline = CreateDefaultSubobject<USplineComponent>(TEXT("spline"));
    this->m_LoopSE = NULL;
}

