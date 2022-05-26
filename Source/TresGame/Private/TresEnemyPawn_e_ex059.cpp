#include "TresEnemyPawn_e_ex059.h"

class UBehaviorTree;



void ATresEnemyPawn_e_ex059::SetDebugBT(UBehaviorTree* BehaviorTree) {
}

bool ATresEnemyPawn_e_ex059::IsMasked() const {
    return false;
}

bool ATresEnemyPawn_e_ex059::IsMaskBroken() const {
    return false;
}

bool ATresEnemyPawn_e_ex059::IsInsideBattleArea(FVector inWorldLoc) {
    return false;
}

float ATresEnemyPawn_e_ex059::GetAtamaBoneAlpha() {
    return 0.0f;
}

bool ATresEnemyPawn_e_ex059::CanTurnToTargetOnMoveEnd() {
    return false;
}

FRotator ATresEnemyPawn_e_ex059::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex059::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex059::ATresEnemyPawn_e_ex059() {
    this->m_pMaskSkeletalMeshComp = NULL;
    this->m_pMaskBodyCollPrim = NULL;
    this->m_AuraEffect = NULL;
    this->m_MaskEyeEffect = NULL;
    this->m_MaskBrokenEffect = NULL;
    this->m_bMaskBrokenEffectOnChangePhase = false;
    this->m_AimOffsetTestActor = NULL;
    this->m_AuraEffectCmp = NULL;
    this->m_MaskAuraEffectCmp = NULL;
    this->m_MaskEyeEffectCmp = NULL;
}

