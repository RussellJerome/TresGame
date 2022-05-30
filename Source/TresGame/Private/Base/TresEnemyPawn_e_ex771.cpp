#include "TresEnemyPawn_e_ex771.h"

class AActor;

void ATresEnemyPawn_e_ex771::StartUpdraftEffect() {
}

void ATresEnemyPawn_e_ex771::SetEncloseFlareHitTime(AActor* Target) {
}

bool ATresEnemyPawn_e_ex771::RedyHeavenlyPillarPhase4() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsStartFlareTornadoEscape() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsHeavenlyPillarPhase4() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsHeavenlyPillarPhase3() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsHeavenlyPillarPhase2() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsHeavenlyPillarPhase1() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsHeavenlyPillar() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsFlareTornadoPhase2() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsFlareTornadoPhase1() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsFlareTornado() {
    return false;
}

bool ATresEnemyPawn_e_ex771::IsEncloseFlare() {
    return false;
}

int32 ATresEnemyPawn_e_ex771::GetFlareTornadoNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex771::GetFlareShotTornadoNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex771::GetFlareShotNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex771::GetEncloseFlareNum() {
    return 0;
}

float ATresEnemyPawn_e_ex771::GetEncloseFlareHitTime() {
    return 0.0f;
}

ATresEnemyPawn_e_ex771::ATresEnemyPawn_e_ex771() {
    this->m_pro_EncloseFlareGeneratorClass = NULL;
    this->m_pro_EncloseFlareHvnGeneratorClass = NULL;
    this->m_pro_FlareShotGeneratorClass = NULL;
    this->m_pro_FlareShotHvnGeneratorClass = NULL;
    this->m_pro_FlareShotTornadoGeneratorClass = NULL;
    this->m_pro_FlareTornadoGeneratorClass = NULL;
    this->m_pro_LivelyFlarePillarGeneratorClass = NULL;
    this->m_pro_UpdraftEffectClass = NULL;
    this->m_pro_HvnEnvEffectClass = NULL;
    this->m_pro_bt04UpdraftEffectClass = NULL;
    this->m_pro_HeavenlyPillarCameraClass = NULL;
    this->m_PCEffDataAsset = NULL;
    this->m_pAtkPawn = NULL;
    this->m_EncloseFlareGenerator = NULL;
    this->m_EncloseFlareHvnGenerator = NULL;
    this->m_FlareShotGenerator = NULL;
    this->m_FlareShotHvnGenerator = NULL;
    this->m_FlareShotTornadoGenerator = NULL;
    this->m_FlareTornadoGenerator = NULL;
    this->m_TerrainCrushingParam = NULL;
    this->m_HeavenlyPillar = NULL;
    this->m_AimFlarePillar = NULL;
    this->m_LivelyFlarePillarGenerator = NULL;
    this->m_HeavenlyUpdraft = NULL;
    this->m_Camera = NULL;
    this->m_HeavenlyPillarParam = NULL;
    this->m_HeavenlyPillarBT04Param = NULL;
    this->m_HvnUpdraftEffect = NULL;
    this->m_HvnEnvEffect = NULL;
    this->m_bt04UpdraftEffect = NULL;
    this->m_pPlFloorColl = NULL;
    this->m_pro_PlFloorCollClass = NULL;
    this->m_WarpVoiceDisableTime = 0.00f;
}

