#include "TresEnemyPawn_e_bx901.h"
#include "Components/SceneComponent.h"

void ATresEnemyPawn_e_bx901::WindEffectStart() {
}

void ATresEnemyPawn_e_bx901::WindEffectEnd() {
}

void ATresEnemyPawn_e_bx901::SetWingSize(float InSize) {
}

void ATresEnemyPawn_e_bx901::SetPhase(ETresEnemyDarkBaymaxPhase NewPhase) {
}

void ATresEnemyPawn_e_bx901::SetHitPointPer(int32 InHpPer) {
}

void ATresEnemyPawn_e_bx901::SetCubeEffect() {
}


bool ATresEnemyPawn_e_bx901::IsRailSlideMoveMode() const {
    return false;
}

bool ATresEnemyPawn_e_bx901::IsPlayerRailSlideMoveMode() const {
    return false;
}

bool ATresEnemyPawn_e_bx901::IsFirstBattlePhase() {
    return false;
}

bool ATresEnemyPawn_e_bx901::GetRailSlideTransform(FTransform& outTF) const {
    return false;
}

FTransform ATresEnemyPawn_e_bx901::GetLocationOnWing(float inDistanceFromBody, bool inLeft, bool inRelative) const {
    return FTransform{};
}

void ATresEnemyPawn_e_bx901::EndCubeEffect() {
}

void ATresEnemyPawn_e_bx901::DebugSetDarkNeedleRainNum(int32 InNum) {
}


ATresEnemyPawn_e_bx901::ATresEnemyPawn_e_bx901() {
    this->m_fPitchResetRate = 0.15f;
    this->m_fRailSlideRotResetRate = 0.15f;
    this->m_fRailSlideRollScale = 0.00f;
    this->m_fDefaultRailSlideDistanceTime = 0.60f;
    this->m_iForceStartSecondBattleHpPer = 0;
    this->m_ForceStartSecondBattleEventName = TEXT("program_e_bx901_REvt_ FirstBattle_End");
    this->m_HitWallDamageAvailability = 0;
    this->m_EffectDataAsset = NULL;
    this->m_DamageParticleClass = NULL;
    this->m_DamageParticleSocketName = TEXT("vfx_center");
    this->m_Player = NULL;
    this->m_RailSlideLeadPawn = NULL;
    this->MyRot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRot"));
}

