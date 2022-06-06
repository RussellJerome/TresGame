#include "TresAttractionPawnTeaCup.h"

void ATresAttractionPawnTeaCup::SetTeaCupMove(bool InMove) {
}

bool ATresAttractionPawnTeaCup::Pudding_IsReady() const {
    return false;
}

FVector ATresAttractionPawnTeaCup::GetFinishTargetPos() const {
    return FVector{};
}

int32 ATresAttractionPawnTeaCup::GetColorNumber() const {
    return 0;
}

ATresAttractionPawnTeaCup::ATresAttractionPawnTeaCup() {
    this->m_VfxSpeedRate = 0.00f;
    this->m_bAttackStraight = true;
    this->m_bWallHitReduce = false;
    this->m_fInputRate = 0.20f;
    this->m_fAttackInputRate = 0.10f;
    this->m_ProjFinishCombo = NULL;
    this->m_CameraHitShake = NULL;
    this->m_CameraLandingShake = NULL;
    this->m_RotationLoopSEAsset_PC = NULL;
    this->m_RotationLoopSEAsset_NPCA = NULL;
    this->m_RotationLoopSEAsset_NPCB = NULL;
    this->m_Param_Speed = 900.00f;
    this->m_Param_WallHitAcc = 800.00f;
    this->m_Param_PawnHitAcc = 800.00f;
    this->m_Param_AttackAcc = 400.00f;
    this->m_Param_RotAttackAcc = -980.00f;
    this->m_Param_RotAddBrake = 0.99f;
    this->m_pAttackTarget = NULL;
    this->m_EffectWD = NULL;
    this->m_EffectWnd = NULL;
    this->m_EffectBld = NULL;
    this->m_EffectFin = NULL;
    this->m_RotationLoopSE = NULL;
    this->m_Param_PuddingSpeed = 1000.00f;
    this->m_Param_PuddingWallHitAcc = 1600.00f;
    this->m_Param_PuddingPawnHitAcc = 1600.00f;
    this->m_Param_PuddingAttackAcc = 500.00f;
    this->m_Param_PuddingFallInvincibleTime = 1.00f;
    this->m_Param_PuddingFallNumWall = 1;
    this->m_Param_PuddingFallNumEnemy = 2;
    this->m_Param_PuddingOscG = 4.00f;
    this->m_Param_PuddingOscK = 0.50f;
    this->m_Param_PuddingCamDistMin = 900.00f;
    this->m_Param_PuddingCamDistRate = 0.80f;
    this->m_Param_PuddingCamTarOfsZMin = 200.00f;
    this->m_Param_PuddingCamTarOfsZRate = 0.35f;
    this->m_Param_PuddingCamUseHeightMax = 5000.00f;
}

