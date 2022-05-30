#include "TresEnemyGigasPawnBase.h"

void ATresEnemyGigasPawnBase::SetStateMachineStep(int32 step) {
}

bool ATresEnemyGigasPawnBase::IsUltimaMode() {
    return false;
}

bool ATresEnemyGigasPawnBase::IsFlyMode() {
    return false;
}

FRotator ATresEnemyGigasPawnBase::GetWaistRotation() const {
    return FRotator{};
}

float ATresEnemyGigasPawnBase::GetUpperBodyBlendRate() const {
    return 0.0f;
}

int32 ATresEnemyGigasPawnBase::GetStateMachineStep() {
    return 0;
}

float ATresEnemyGigasPawnBase::GetMachineGunBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetDamageAddBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterUpBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterTopMachineGunBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterTopBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterMachineGunBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterDownMachineGunBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterDownBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetBoosterAddBlendRate() const {
    return 0.0f;
}

float ATresEnemyGigasPawnBase::GetAimOffsetAlpha() const {
    return 0.0f;
}

bool ATresEnemyGigasPawnBase::CanbeUltimaMode() {
    return false;
}

ATresEnemyGigasPawnBase::ATresEnemyGigasPawnBase() {
    this->m_VehiclePawnGigasClass = NULL;
    this->m_e_ex015Class = NULL;
    this->m_pro_DisableGigasPC = false;
    this->m_pro_DieBlowTest = false;
    this->m_pro_ShotNumMin = 10;
    this->m_pro_ShotNumMax = 10;
    this->m_pro_AimShotMinNum = 1;
    this->m_pro_AimShotMaxNum = 2;
    this->m_pro_ShotBureDistMin = 0.00f;
    this->m_pro_ShotBureDistMax = 0.00f;
    this->m_pro_ShotSpeed = 2000.00f;
    this->m_pro_ShotHoseiAngle = 20.00f;
    this->m_pro_ShotLoopMotionPlayRate = 1.00f;
    this->m_pro_UltimaModeShotNumMin = 10;
    this->m_pro_UltimaModeShotNumMax = 10;
    this->m_pro_UltimaModeShotLoopMotionPlayRate = 1.00f;
    this->m_pro_PunchMotionPlayRate = 1.00f;
    this->m_pro_BombMotionPlayRate = 1.00f;
    this->m_pro_CanbeUltimaModeHpPer = 0;
    this->m_pro_LightMin = 0.00f;
    this->m_pro_LightMax = 1.00f;
    this->m_pro_LightSpeedRate = 1.00f;
    this->m_pro_LightFadeOff = false;
    this->m_pro_DamageAddMotionInterval = -1.00f;
    this->m_pro_BoosterBlendRate = 0.05f;
    this->m_pro_BoosterUpPitch = 5.00f;
    this->m_pro_BoosterDownPitch = -5.00f;
    this->m_pro_BattleEscapeTime = 120.00f;
    this->m_pro_UltimaModeBattleEscapeTime = 120.00f;
    this->m_pro_AuraRate = 0.10f;
    this->m_AuraEffData = NULL;
    this->m_EffDataAsset = NULL;
    this->m_AuraEff = NULL;
    this->m_VernierEff[0] = NULL;
    this->m_VernierEff[1] = NULL;
    this->m_VernierEff[2] = NULL;
    this->m_VernierEff[3] = NULL;
    this->m_VernierEff[4] = NULL;
    this->m_VernierEff[5] = NULL;
    this->m_pro_VernierEffData = NULL;
}

