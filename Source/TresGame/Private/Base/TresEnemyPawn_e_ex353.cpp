#include "TresEnemyPawn_e_ex353.h"
#include "TresProjectileManager_e_ex353_ThornBeam.h"

class UObject;
class AActor;

void ATresEnemyPawn_e_ex353::ThornWildDanceSendEvent(UObject* WorldContextObject, ETresEnemyEx353ThornWildDanceEvent EventType) {
}

void ATresEnemyPawn_e_ex353::SetEnableDebugFnishBlow(bool bEnable) {
}

void ATresEnemyPawn_e_ex353::OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyPawn_e_ex353::OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyPawn_e_ex353::IsThornBeamMoveShield() {
    return false;
}

bool ATresEnemyPawn_e_ex353::IsThornBeamLoopCancel() {
    return false;
}

bool ATresEnemyPawn_e_ex353::IsHitAerialComboAttack() {
    return false;
}

bool ATresEnemyPawn_e_ex353::IsDuringThornWildDance() {
    return false;
}

bool ATresEnemyPawn_e_ex353::IsDebugFnishBlow() {
    return false;
}

int32 ATresEnemyPawn_e_ex353::GetShieldNum() {
    return 0;
}

void ATresEnemyPawn_e_ex353::GetShieldList(TArray<AActor*>& OutList) {
}

AActor* ATresEnemyPawn_e_ex353::GetCenterActor() {
    return NULL;
}

bool ATresEnemyPawn_e_ex353::GetAttackGuarded() {
    return false;
}

void ATresEnemyPawn_e_ex353::BP_FinishThornWildDance() {
}

void ATresEnemyPawn_e_ex353::BP_EndHandCharging() {
}

ATresEnemyPawn_e_ex353::ATresEnemyPawn_e_ex353() {
    this->m_ThornBeamManager = CreateDefaultSubobject<UTresProjectileManager_e_ex353_ThornBeam>(TEXT("ThornBeamManager"));
    this->m_ShieldActorClass = NULL;
    this->m_ThornWildDanceDarkAsset = NULL;
    this->m_ThornWildDanceFlushAsset = NULL;
    this->m_EveryDirectionShotAsset = NULL;
    this->m_LaserShotProjectileClass = NULL;
    this->m_LaserShotIgnoreGuardProjectileClass = NULL;
    this->m_LaserShotMissProjectileClass = NULL;
    this->m_bIsEveryDirectionShotAfterSpawnStunProjectile = false;
    this->m_StunProjectileClass = NULL;
    this->m_EveryDirectionShotDeployDist = 2700.00f;
    this->m_SpawnStunProjectileTime = 1.00f;
    this->m_ThornWildDanceDarkCmp = NULL;
    this->m_EveryDirectionShotEffectCmp = NULL;
    this->m_Ex353EffectDataAsset = NULL;
    this->m_SpawnShieldVoice = NULL;
    this->m_NextPlayVoiceSpawnShieldTime = 5.00f;
}

