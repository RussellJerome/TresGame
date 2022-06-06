#include "TresCoop2_e_ex761_WavyLightning.h"

void UTresCoop2_e_ex761_WavyLightning::OnStartEnd(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnRaiseCutEnd(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnRaiseCutAttackHit(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnFinishEnd(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnDarknessSpreadOutStart(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnAttackEnd(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop2_e_ex761_WavyLightning::OnAppearEnd(const FTresCoopDefinitionParamBP& Param) {
}

UTresCoop2_e_ex761_WavyLightning::UTresCoop2_e_ex761_WavyLightning() {
    this->m_CameraCenterParticleSystem = NULL;
    this->m_CameraAppearRadius = 0.00f;
    this->m_LightningProjectileClass = NULL;
    this->m_DummyLightningSpawnIntervalTime = 0.50f;
    this->m_DummyLightningMinIntervalDistance = 500.00f;
    this->m_AimLightningSpawnIntervalTime = 1.00f;
    this->m_AimLightningAttackStartSpawnIntervalTime = 0.00f;
    this->m_AimLightningSpawnLocationRate = 1.00f;
    this->m_bIsAttackStartFinish = false;
    this->m_AttackStartFinishLightningEndDelayTime = 0.00f;
    this->m_AttackStartDelyaTime = 4.00f;
    this->m_RaiseCutStartDelayTime = 0.00f;
    this->m_RaiseCutAppearDistance = 100.00f;
    this->m_FinishStartDelayTime = 0.40f;
    this->m_FinishAttachEndTime = 1.00f;
    this->m_FinishAppearIntervalTime = 0.00f;
    this->m_FinishAppearDistance = 1000.00f;
    this->m_FinishAppearOffsetHeightList[0] = 0.00f;
    this->m_FinishAppearOffsetHeightList[1] = 0.00f;
    this->m_FinishAppearOffsetHeightList[2] = 0.00f;
    this->m_FinishAppearOffsetHeightList[3] = 0.00f;
    this->m_FinishAppearOffsetHeightList[4] = 0.00f;
    this->m_FinishAppearOffsetHeightList[5] = 0.00f;
    this->m_FinishAppearOffsetHeightList[6] = 0.00f;
    this->m_FinishAppearOffsetHeightList[7] = 0.00f;
    this->m_FinishAppearOffsetHeightList[8] = 0.00f;
    this->m_FinishAppearOffsetHeightList[9] = 0.00f;
    this->m_FinishAppearOffsetHeightList[10] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[0] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[1] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[2] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[3] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[4] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[5] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[6] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[7] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[8] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[9] = 0.00f;
    this->m_FinishAppearAttackHitOffsetHeightList[10] = 0.00f;
    this->m_DarknessSpreadOutAppearBlockDistance = 0.00f;
    this->m_DarknessSpreadOutAppearBlockOtherPawnDistance = 3000.00f;
    this->m_VisualChangeEndDelayTime = 0.00f;
    this->m_CenterSignParticleSystem = NULL;
    this->m_LightCoefficient = 0.50f;
    this->m_LightChangeStartTime = 1.00f;
    this->m_LightChangeEndTime = 1.00f;
    this->m_SignEffectDelayTime = 0.00f;
    this->m_EnvChangeDelayTime = 0.00f;
    this->m_LightChangeDelayTime = 0.00f;
    this->m_FindReferencePointEnvQuery = NULL;
    this->m_FindReferencePointIntervalTime = 0.00f;
}

