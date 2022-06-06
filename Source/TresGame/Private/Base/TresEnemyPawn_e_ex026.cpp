#include "TresEnemyPawn_e_ex026.h"
#include "TresReactorComponent.h"

bool ATresEnemyPawn_e_ex026::IsRideRailSlideActor() const {
    return false;
}

bool ATresEnemyPawn_e_ex026::IsEnableLongStunned() {
    return false;
}

bool ATresEnemyPawn_e_ex026::IsEnableImmediatelyShakeOff() {
    return false;
}

void ATresEnemyPawn_e_ex026::BP_StartSpread() {
}

void ATresEnemyPawn_e_ex026::BP_DebugSetBBDestination() {
}

ATresEnemyPawn_e_ex026::ATresEnemyPawn_e_ex026() {
    this->m_EffDataAsset = NULL;
    this->m_ColorSmokeRailSlideActor = NULL;
    this->m_SmallAirPlainData = NULL;
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresEnemy026Reactor"));
    this->m_bAirFrightMission = false;
    this->m_SpawnCrashEffectTime = 0.50f;
    this->m_DieBrake = 0.96f;
    this->m_RailLifeTime = 7.00f;
    this->m_RailDistance = 400.00f;
    this->m_RailTangentScale = 400.00f;
    this->m_RideMaxSpeed = 3000.00f;
    this->m_RideAcceleration = 2000.00f;
    this->m_RideAccelDistance = 2000.00f;
    this->m_RideAccelTime = 5.00f;
    this->m_PrevPutRailSlideActor = NULL;
    this->m_ColorSmokeEffectCmp = NULL;
    this->m_SmallAirplane = NULL;
}

