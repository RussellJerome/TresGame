#include "TresDisneyMagicPawnAriel.h"

void ATresDisneyMagicPawnAriel::SetFinishRainbowParameter(float rbw_main, float rbw_glow, float rbw_flr_01, float rbw_flr_01b, float rbw_flr_01c, float rbw_flr_02) {
}

TArray<FVector> ATresDisneyMagicPawnAriel::GetPuddlePosList() {
    return TArray<FVector>();
}

float ATresDisneyMagicPawnAriel::GetFinishTimerMax() const {
    return 0.0f;
}

float ATresDisneyMagicPawnAriel::GetFinishTimer() const {
    return 0.0f;
}

ATresDisneyMagicPawnAriel::ATresDisneyMagicPawnAriel() {
    this->m_EffAssetJustMarker = NULL;
    this->m_EffAssetGood = NULL;
    this->m_EffAssetBad = NULL;
    this->m_EffAssetPuddleGood = NULL;
    this->m_EffAssetPuddleJust = NULL;
    this->m_EffAssetDiveTraceBad = NULL;
    this->m_EffAssetDiveTraceGood = NULL;
    this->m_EffAssetDiveTraceJust = NULL;
    this->m_EffAssetFinishRainbow = NULL;
    this->m_ProjSplashTwistGood = NULL;
    this->m_ProjSplashTwistJust = NULL;
    this->m_ProjFinishBigGood = NULL;
    this->m_ProjFinishBigJust = NULL;
    this->m_ProjFinishSmall = NULL;
    this->m_Param_DiveHeight[0] = 1.00f;
    this->m_Param_DiveHeight[1] = 1.00f;
    this->m_Param_DiveHeight[2] = 1.00f;
    this->m_Param_DiveHeight[3] = 1.00f;
    this->m_Param_DiveDistance[0] = 1.00f;
    this->m_Param_DiveDistance[1] = 1.00f;
    this->m_Param_DiveDistance[2] = 1.00f;
    this->m_Param_DiveDistance[3] = 1.00f;
    this->m_Param_DiveAttackVelAddZ[0] = 0.00f;
    this->m_Param_DiveAttackVelAddZ[1] = 0.00f;
    this->m_Param_DiveAttackVelAddZ[2] = 0.00f;
    this->m_Param_DiveAttackVelAddZ[3] = 0.00f;
    this->m_Param_PlayerGravity = 3.00f;
    this->m_Param_DiveJustTime = 0.40f;
    this->m_Param_bAutoDive = false;
    this->m_Param_ScoreAttack = 10;
    this->m_Param_ScoreFinish = 20;
    this->m_Param_ScoreKill = 50;
    this->m_Camera = NULL;
    this->m_pEffDiveTrace = NULL;
    this->m_pEffFinishRainbow = NULL;
}

