#include "TresAttractionPawnMerryGoRound.h"

float ATresAttractionPawnMerryGoRound::GetRotYaw() const {
    return 0.0f;
}

ATresAttractionPawnMerryGoRound::ATresAttractionPawnMerryGoRound() {
    this->m_ProjExcellent = NULL;
    this->m_ProjGood = NULL;
    this->m_ProjFinish = NULL;
    this->m_Ring = NULL;
    this->m_VfxAssetZeroGrav = NULL;
    this->m_VfxAssetFinish = NULL;
    this->m_EffDataAsset = NULL;
    this->m_SndAssetFail = NULL;
    this->m_Param_RotSpeedMin = 40.00f;
    this->m_Param_RotSpeedAddMax = 400.00f;
    this->m_Param_RotSpeedAdd = 100.00f;
    this->m_Param_RotBrakeRate = 1.00f;
    this->m_Param_AttackFailInterval = 0.00f;
    this->m_Param_ScoreExcellentOne = 50;
    this->m_Param_ScoreExcellent = 10;
    this->m_Param_ScoreGoodOne = 20;
    this->m_Param_ScoreGood = 5;
    this->m_Param_ScoreFinish = 30;
    this->m_Param_ScoreKill = 50;
    this->m_EffectFinish = NULL;
    this->m_Camera = NULL;
    this->m_pChainReserveProj = NULL;
}

