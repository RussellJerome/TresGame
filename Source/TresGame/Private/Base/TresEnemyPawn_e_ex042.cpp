#include "TresEnemyPawn_e_ex042.h"



void ATresEnemyPawn_e_ex042::SetActorConstrained(bool bSet) {
}


bool ATresEnemyPawn_e_ex042::IsInsideBattleArea(FVector inWorldLoc) const {
    return false;
}

bool ATresEnemyPawn_e_ex042::IsDebugDisplay() const {
    return false;
}

bool ATresEnemyPawn_e_ex042::IsChainGenerated() {
    return false;
}

float ATresEnemyPawn_e_ex042::GetPropellerRotRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex042::GetPropellerRot() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex042::GetChainsPitch() {
    return 0.0f;
}

FVector ATresEnemyPawn_e_ex042::GetAnchorLocation() {
    return FVector{};
}

float ATresEnemyPawn_e_ex042::GetAnchorDistance() {
    return 0.0f;
}

FVector ATresEnemyPawn_e_ex042::GetAnchorAttachBoneLocation() {
    return FVector{};
}


ATresEnemyPawn_e_ex042::ATresEnemyPawn_e_ex042() {
    this->m_fSingleChainLength = 0.00f;
    this->m_DamageRotate = true;
    this->m_fMaxDamageRotAngle = 0.00f;
    this->m_bConstVelOrTime = false;
    this->m_fDamageRotVel = 0.00f;
    this->m_fDamageRotTime = 0.00f;
    this->m_fReflectMoveSpeed = 0.00f;
    this->StartCurve = NULL;
    this->EndCurve = NULL;
    this->m_bDebugCurve = false;
    this->m_AnchorEffect = NULL;
    this->m_AnchorEffectCmp = NULL;
    this->m_bIsActorConstrained = false;
    this->m_bUpdateChainsPostAnim = false;
    this->m_fRateSpecificTransformForAnchor = 0.00f;
    this->m_bIsPhycisSimulated = false;
    this->m_bDebug = false;
    this->m_Anchor = NULL;
    this->m_pro_PropellerRotMaxSpeed = 0.00f;
    this->m_PropellerStCurve = NULL;
    this->m_PropellerEndCurve = NULL;
    this->m_fPropellerEndCurveTimeScale = 1.00f;
}

