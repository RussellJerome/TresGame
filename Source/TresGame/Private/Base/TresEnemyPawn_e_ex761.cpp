#include "TresEnemyPawn_e_ex761.h"

class ATresEnemyPawn_e_ex761;
class UObject;
class AActor;

void ATresEnemyPawn_e_ex761::OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyPawn_e_ex761::IsXigbarWeapon() const {
    return false;
}

bool ATresEnemyPawn_e_ex761::IsWarpVanishMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex761::IsReverseMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex761::IsEnableForceWarp() const {
    return false;
}

bool ATresEnemyPawn_e_ex761::IsEnableDamageWarp() const {
    return false;
}

ATresEnemyPawn_e_ex761* ATresEnemyPawn_e_ex761::GetXigbarPawn() const {
    return NULL;
}

void ATresEnemyPawn_e_ex761::GetTargetNoneOtherPawnList(TArray<ATresEnemyPawn_e_ex761*>& OutList) const {
}

float ATresEnemyPawn_e_ex761::GetRightHandMotionBlendRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex761::GetLeftHandMotionBlendRate() const {
    return 0.0f;
}

void ATresEnemyPawn_e_ex761::GetHomeLocationList(TArray<FVector>& OutList) const {
}

float ATresEnemyPawn_e_ex761::GetCoopElapsedTime() const {
    return 0.0f;
}

AActor* ATresEnemyPawn_e_ex761::GetBattleAreaCameraAimActor(UObject* WorldContextObject) {
    return NULL;
}

void ATresEnemyPawn_e_ex761::DebugSetEnableDrawHomeLocations(int32 bEnable) {
}

void ATresEnemyPawn_e_ex761::DebugSetEnableDrawCoopCommonInfo(int32 bEnable) {
}

void ATresEnemyPawn_e_ex761::DebugEndReverseMode() {
}

void ATresEnemyPawn_e_ex761::DebugApplyReverseMode() {
}

ATresEnemyPawn_e_ex761::ATresEnemyPawn_e_ex761() {
    this->m_ManagerPawnClass = NULL;
    this->m_bEnableSyncAttractionHitPoint = false;
    this->m_WarpParticleAttachDataAsset = NULL;
    this->m_bEnableWarpInEffectAttach = true;
    this->m_bEnableWarpOutEffectAttach = true;
    this->m_SideWarpParticleSystem = NULL;
    this->m_VerticalWarpParticleSystem = NULL;
    this->m_PostAuraParticleSystem = NULL;
    this->m_CoopPostAuraParticleSystem = NULL;
    this->m_SpreadOutScreenEffectParticleSystem = NULL;
    this->m_WeaponType = ETresEnemy_e_ex761_Weapon::Weapon1;
    this->m_WeaponTrailEffectGroupID = 0;
    this->m_PrevBattleAreaIgnoreNum = 0;
    this->m_BattleAreaIgnoreDistance = 0.00f;
    this->m_BattleAreaAppearTurnSpeed = 0.00f;
    this->m_WavyLightningCameraClass = NULL;
    this->m_WavyLightningCameraStartInterpTime = 0.50f;
    this->m_WavyLightningCameraEndInterpTime = 0.50f;
    this->m_Camera = NULL;
}

