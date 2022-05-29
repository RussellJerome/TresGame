#include "TresEnemyPawn_e_ex711.h"
#include "TresSkeletalMeshComponent.h"

void ATresEnemyPawn_e_ex711::SetCommonCounterZero() {
}

bool ATresEnemyPawn_e_ex711::IsPlayerFloorBoss() {
    return false;
}

bool ATresEnemyPawn_e_ex711::IsOutputRise() {
    return false;
}

float ATresEnemyPawn_e_ex711::GetVerticalMissileMotBlendRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetRadioTowerRotXRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetRadioTowerRFRotX() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetRadioTowerRBRotX() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetRadioTowerLFRotX() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetRadioTowerLBRotX() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex711::GetPlayerHopActorGroupNo() {
    return 0;
}

int32 ATresEnemyPawn_e_ex711::GetPlayerAthleticFlowGroupNo() {
    return 0;
}

float ATresEnemyPawn_e_ex711::GetOutputRiseTimer() {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex711::GetCommonCounter() {
    return 0;
}

float ATresEnemyPawn_e_ex711::GetAntennaRotRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetAntennaRotR() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetAntennaRotL() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetAntennaRot() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex711::GetAnimSlotHeadBlendRate() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ex711::DebugOpenRadioTower() {
}

void ATresEnemyPawn_e_ex711::DebugCloseRadioTower() {
}

void ATresEnemyPawn_e_ex711::AddCommonCounter() {
}

ATresEnemyPawn_e_ex711::ATresEnemyPawn_e_ex711() {
    this->m_RadioTowerOpenCurve = NULL;
    this->m_RadioTowerCloseCurve = NULL;
    this->m_EffDataAsset = NULL;
    this->MyCollMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCollMesh0"));
    this->MyCollMesh1 = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCollMesh1"));
    this->m_pro_PhysicsActorManagerClass = NULL;
    this->m_PhysicsActorManager = NULL;
    this->m_pWeatherActor = NULL;
    this->m_WeatherFirstEff = NULL;
    this->m_WeatherSecondEff = NULL;
    this->m_WeatherThirdEff = NULL;
    this->m_CommonParam = NULL;
    this->m_PhysicsActorResetEff = NULL;
    this->m_pro_PhysicsActorResetEffData = NULL;
    this->m_pPlayerPushCollActor = NULL;
    this->m_HeadPawnClass = NULL;
}

