#include "TresEnemyPawn_e_ex721.h"

bool ATresEnemyPawn_e_ex721::IsTowerMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex721::IsReturnNormalMode() const {
    return false;
}

int32 ATresEnemyPawn_e_ex721::GetExistThornChainNum() {
    return 0;
}

float ATresEnemyPawn_e_ex721::GetEscapeLastWoodsJailElapsedTime() {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex721::GetCaptureTargetThornChainNum() {
    return 0;
}

float ATresEnemyPawn_e_ex721::GetCapturedPlayerElapsedTime() {
    return 0.0f;
}

void ATresEnemyPawn_e_ex721::DebugSetDashNum(int32 Num) {
}

float ATresEnemyPawn_e_ex721::BP_GetEyeRotateValue() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex721::BP_GetEyeRotateRateValue() const {
    return 0.0f;
}

FRotator ATresEnemyPawn_e_ex721::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex721::BP_GetAnimOffsetRate() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex721::ATresEnemyPawn_e_ex721() {
    this->m_WoodsJailAsset = NULL;
    this->m_AddTowerYaw = 0.00f;
    this->m_TowerOffsetZ = 5500.00f;
    this->m_BoneName = TEXT("kh_sk");
    this->m_AimOffsetZ = 0.00f;
    this->m_TowerLimitLockOnRange = 1300.00f;
    this->m_TowerOffLockOnRange = 1800.00f;
    this->m_RotateSpeed = 35.00f;
    this->m_SendDarkSceneEventTime = 5.00f;
    this->m_SendBrightSceneEventTime = 5.00f;
    this->m_DoReturnNormalModePearsentHP = 30;
    this->m_InitEyeRotateSpeed = 100.00f;
    this->m_LandScapeActor = NULL;
    this->m_TowerActor = NULL;
    this->m_ThornChainMaxNum = 10;
    this->m_ThornChainManager = NULL;
    this->m_ThornWavingDummyMeshAsset = NULL;
    this->m_EffDataAsset = NULL;
    this->m_BlowProjectileAsset = NULL;
    this->m_TossProjectileAsset = NULL;
    this->m_ThornWavingDummyMeshActors[0] = NULL;
    this->m_ThornWavingDummyMeshActors[1] = NULL;
    this->m_ThornWavingDummyMeshActors[2] = NULL;
    this->m_ThornWavingDummyMeshActors[3] = NULL;
    this->m_WarpDestination = NULL;
    this->m_CallBombProjectile = NULL;
}

