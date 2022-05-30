#include "TresEnemyPawn_e_ex011.h"
#include "Components/SceneComponent.h"

class ATresEnemyPawn_e_ex011;

void ATresEnemyPawn_e_ex011::ResetCarriageStartState() {
}

bool ATresEnemyPawn_e_ex011::IsTop() const {
    return false;
}

FRotator ATresEnemyPawn_e_ex011::GetWheelRotation(FName InBoneName, bool bInverse) const {
    return FRotator{};
}

int32 ATresEnemyPawn_e_ex011::GetNum() const {
    return 0;
}

void ATresEnemyPawn_e_ex011::GetConnectPawnList(TArray<ATresEnemyPawn_e_ex011*>& OutList) const {
}

void ATresEnemyPawn_e_ex011::DebugToFortressMode() {
}

void ATresEnemyPawn_e_ex011::DebugToCarriageMode() {
}

void ATresEnemyPawn_e_ex011::DebugSetNumTailSwing(int32 Num) {
}

void ATresEnemyPawn_e_ex011::DebugSetNumDash(int32 Num) {
}

void ATresEnemyPawn_e_ex011::DebugSetNumBombardment(int32 Num) {
}

void ATresEnemyPawn_e_ex011::DebugSetEnableDrawTarget(int32 bEnable) {
}

void ATresEnemyPawn_e_ex011::DebugDisappearConnectEffect() {
}

void ATresEnemyPawn_e_ex011::DebugDestroyChild(int32 Num) {
}

void ATresEnemyPawn_e_ex011::DebugCreateChild(int32 Num) {
}

void ATresEnemyPawn_e_ex011::DebugAppearConnectEffect() {
}

void ATresEnemyPawn_e_ex011::BP_OnToCarriageActionSkipBattleStart() {
}

void ATresEnemyPawn_e_ex011::BP_OnToCarriageActionSkip() {
}

void ATresEnemyPawn_e_ex011::BP_MethdToCarriageAction() {
}

void ATresEnemyPawn_e_ex011::BP_IdleToCarriageAction() {
}

void ATresEnemyPawn_e_ex011::BP_ApplyCarriageMode() {
}

ATresEnemyPawn_e_ex011::ATresEnemyPawn_e_ex011() {
    this->CoopJumpLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CoopJumpLocationComponent"));
    this->m_MaxConnect = 10;
    this->m_SpawnNumConnect = 2;
    this->m_ConnectBoneDistance = 50.00f;
    this->m_PassStepHeight = 10.00f;
    this->m_HillClimbAngle = 55.00f;
    this->m_bIsAutoCarriageMode = false;
    this->m_ToCarriageActionClass = NULL;
    this->m_StringConnectPointDistance = 0.00f;
    this->m_StringConnectPointDistanceInterpSpeed = 0.00f;
    this->m_StringRotationAddConnectPointDistance = 0.00f;
    this->m_StringRotationAddConnectPointDistanceMaxAngle = 0.00f;
    this->m_StringRotationAddConnectPointDistanceRate = 1.00f;
    this->m_StringRotationAdjustPower = 0.00f;
    this->m_RodConnectPointDistance = 0.00f;
    this->m_RodConnectPointDistanceInterpSpeed = 0.00f;
    this->m_RodRotationAdjustPower = 0.00f;
    this->m_RodConnectPointMaxAngle = 0.00f;
    this->m_CoopJumpActorClass = NULL;
    this->m_CoopAttackDefinitionClass = NULL;
    this->m_FortressFloorCollisionActorClass = NULL;
    this->m_NumConnect = -1;
    this->m_bIsEndFortressMode = false;
    this->m_RepelSpeed = 5000.00f;
}

