#include "TresEnemyPawn_e_ex773.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawn_e_ex773_EclipseManagerComponent.h"

class ATresEnemyPawnBase;
class AActor;

void ATresEnemyPawn_e_ex773::StartUpdraftEffect() {
}

void ATresEnemyPawn_e_ex773::SpawnPhaseDifferenceActor(TSubclassOf<ATresEnemyPawnBase> PawnClass, ETresEnemyXIIIPhaseType phase) {
}

void ATresEnemyPawn_e_ex773::SetMasterLightCoefficientDefault(float InTransitionTime, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex773::SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresEnemyPawn_e_ex773::SetEncloseFlareHitTime(AActor* Target) {
}

bool ATresEnemyPawn_e_ex773::RedyHeavenlyPillarPhase4() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsStartFlareTornadoEscape() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsSecondBattle() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsHeavenlyPillarPhase4() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsHeavenlyPillarPhase3() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsHeavenlyPillarPhase2() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsHeavenlyPillarPhase1() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsHeavenlyPillar() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsFlareTornadoPhase2() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsFlareTornadoPhase1() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsFlareTornado() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsFinish() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsEncloseFlare() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsEclipse13WaveComplete() {
    return false;
}

bool ATresEnemyPawn_e_ex773::IsEclipse13() {
    return false;
}

int32 ATresEnemyPawn_e_ex773::GetFlareTornadoNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex773::GetFlareShotTornadoNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex773::GetFlareShotNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex773::GetEncloseFlareNum() {
    return 0;
}

float ATresEnemyPawn_e_ex773::GetEncloseFlareHitTime() {
    return 0.0f;
}

UTresEnemyPawn_e_ex773_EclipseManagerComponent* ATresEnemyPawn_e_ex773::GetEclipseManagerComponent() {
    return NULL;
}

int32 ATresEnemyPawn_e_ex773::GetEclipse13NowWaveNum() {
    return 0;
}

void ATresEnemyPawn_e_ex773::ExecNextWaveEclipse13(float ReserveTime, bool bNotifyJustInCase) {
}









void ATresEnemyPawn_e_ex773::BpDestroyEquipment() {
}

ATresEnemyPawn_e_ex773::ATresEnemyPawn_e_ex773() {
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
    this->SwordJointClass = NULL;
    this->m_PCEffDataAsset = NULL;
    this->LimitZ_ForOneHeart = 4000.00f;
    this->EclipseManagerComponent = CreateDefaultSubobject<UTresEnemyPawn_e_ex773_EclipseManagerComponent>(TEXT("EclipseManagerComponent"));
    this->CommonParameterAsset = NULL;
    this->ParameterEclipse13_Asset = NULL;
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
    this->m_WarpVoiceDisableTime = 0.00f;
}

