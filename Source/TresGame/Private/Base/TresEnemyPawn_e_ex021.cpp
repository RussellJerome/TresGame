#include "TresEnemyPawn_e_ex021.h"
#include "TresReactorComponent.h"

bool ATresEnemyPawn_e_ex021::ValidateBoardedRapidMove() {
    return false;
}

bool ATresEnemyPawn_e_ex021::ShouldShakeOff() {
    return false;
}

bool ATresEnemyPawn_e_ex021::IsActionMode(ETresEnemyEx021ActionMode mode) {
    return false;
}

float ATresEnemyPawn_e_ex021::GetMoveThornsElapsedTime() {
    return 0.0f;
}

float ATresEnemyPawn_e_ex021::GetBoardedElapsedTime() {
    return 0.0f;
}

void ATresEnemyPawn_e_ex021::EnableImmediatelyShakeOff() {
}

void ATresEnemyPawn_e_ex021::BP_SetEnableLongStunned(bool bEnableLongStunned) {
}

FRotator ATresEnemyPawn_e_ex021::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex021::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

bool ATresEnemyPawn_e_ex021::BP_DebugShakeOff() {
    return false;
}

void ATresEnemyPawn_e_ex021::BP_DebugSetBT() {
}

bool ATresEnemyPawn_e_ex021::BP_DebugRapidAccel() {
    return false;
}

bool ATresEnemyPawn_e_ex021::BP_DebugFireBreath() {
    return false;
}

void ATresEnemyPawn_e_ex021::BP_DebugEndWeaponAttack() {
}

ATresEnemyPawn_e_ex021::ATresEnemyPawn_e_ex021() {
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresEnemy021Reactor"));
    this->m_PlayerCameraEx021 = NULL;
    this->m_RevengeAction = NULL;
    this->m_ShotgunFireProjectile = NULL;
    this->m_BBPearlShotgunFireProjectile = NULL;
    this->m_BBpearlBoneName.AddDefaulted(1);
    this->m_GlideMagicProjectile = NULL;
    this->m_pFireBreathReflectEffectData = NULL;
    this->m_FireBreathReflectEffectCmp = NULL;
    this->m_RotatingExplosiveProjectile = NULL;
    this->m_LongStunnedTime = 10.00f;
    this->m_DoLongStunnedPearsentHP = 20;
    this->m_EffectDataAsset = NULL;
    this->m_BlurParams.AddDefaulted(3);
    this->m_NormalToAccelerationBlurParamTime = 0.50f;
    this->m_AccelerationToNormalBlurParamTime = 0.50f;
    this->m_DoShakeOffPearsentHP = 1;
    this->m_bDebugEx021 = true;
}

