#include "TresEnemyPawn_e_dw401.h"

void ATresEnemyPawn_e_dw401::SetAction_CoreSmallAttackColorTest() {
}

void ATresEnemyPawn_e_dw401::SetAction_CoreScaleColorTest() {
}

void ATresEnemyPawn_e_dw401::SetAction_CoreDamageColorTest() {
}

void ATresEnemyPawn_e_dw401::SetAction_CoreBigAttackColorTest() {
}

void ATresEnemyPawn_e_dw401::ResetSceneLight() {
}

bool ATresEnemyPawn_e_dw401::IsMickeyRide() {
    return false;
}

float ATresEnemyPawn_e_dw401::GetCoreScaleRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_dw401::GetCoreScale() const {
    return 0.0f;
}

float ATresEnemyPawn_e_dw401::GetCoreRotRoll() const {
    return 0.0f;
}

FRotator ATresEnemyPawn_e_dw401::GetCoreRotAim() const {
    return FRotator{};
}

float ATresEnemyPawn_e_dw401::GetCoreMeshLocRate() const {
    return 0.0f;
}

FVector ATresEnemyPawn_e_dw401::GetCoreMeshLoc() const {
    return FVector{};
}

ATresEnemyPawn_e_dw401::ATresEnemyPawn_e_dw401() {
    this->m_CoreMoveEff = NULL;
    this->m_CoreStopEff = NULL;
    this->m_CoreEventEff = NULL;
    this->m_bIsCyclone = false;
    this->m_WaveEff = NULL;
    this->m_WaveEffData = NULL;
    this->m_EventWaveEffData = NULL;
    this->m_CoreMoveEffData = NULL;
    this->m_CoreStopEffData = NULL;
    this->m_CoreEventEffData = NULL;
    this->m_CoreLightEffData = NULL;
    this->m_CoreDispOnEffData = NULL;
    this->m_AppearGroundEffData = NULL;
    this->m_CloudDustEffData = NULL;
    this->m_WaveRightCloudDustEffData = NULL;
    this->m_WaveLeftCloudDustEffData = NULL;
    this->m_EventFinishHitEffData = NULL;
    this->m_PCHitEffData = NULL;
    this->m_WaveEffectLength = 100;
    this->m_WaveSmokeEffectMax = 200;
    this->m_WaveEffectWidth = 5;
    this->m_WaveEffectHeight = 2;
    this->m_WaveEffectLengthInterval = 100.00f;
    this->m_WaveEffectWidthInterval = 50.00f;
    this->m_WaveEffectHeightInterval = 50.00f;
    this->m_VenishWaveDmgHitCount = 8;
    this->m_VenishWaveDmgHitSubCount = 1;
    this->m_VenishWaveDmgHitSubCountStartTime = 5.00f;
    this->m_VenishWaveDmgHitSubCountInterval = 0.10f;
    this->m_WaveLengthMinCoreDispTime = 30.00f;
    this->m_CoreDispOnWaveScrollTime = 0.50f;
    this->m_CoreRotRollSpeed = 360.00f;
    this->m_pro_LockOnRange = 10000.00f;
    this->m_CoreScaleMin = 0.00f;
    this->m_CoreScaleTime = 0.70f;
    this->m_EventLightChainActionData = NULL;
    this->m_CyclopneAppearCurve = NULL;
    this->m_CkSlowMoveSpeed = 650.00f;
    this->m_CycloneRootHeightOffset = 200.00f;
    this->m_CycloneHeightOffset = 400.00f;
    this->m_A_Color_Shift_Delay = 0.00f;
    this->m_A_Color_Shift_Time = 0.70f;
    this->m_A_Center_Bounds = 30.00f;
    this->m_A_Center_Bounds_Blur = 0.80f;
    this->m_A_Out_Bounds = 80.00f;
    this->m_A_Out_Bounds_Blur = 10.00f;
    this->m_B_Color_Shift_Delay = 0.00f;
    this->m_B_Color_Shift_Time = 0.70f;
    this->m_B1_Center_Bounds = 30.00f;
    this->m_B1_Center_Bounds_Blur = 0.80f;
    this->m_B1_Out_Bounds = 80.00f;
    this->m_B1_Out_Bounds_Blur = 7.00f;
    this->m_B2_Center_Bounds = 30.00f;
    this->m_B2_Center_Bounds_Blur = 0.80f;
    this->m_B2_Out_Bounds = 80.00f;
    this->m_B2_Out_Bounds_Blur = 7.00f;
    this->m_B1_B2_Color_Shift_Time = 0.50f;
    this->m_C_Color_Shift_Delay = 0.00f;
    this->m_C_Color_Shift_Time = 0.00f;
    this->m_C_Center_Bounds = 10.00f;
    this->m_C_Center_Bounds_Blur = 0.80f;
    this->m_C_Out_Bounds = 85.00f;
    this->m_C_Out_Bounds_Blur = 13.00f;
    this->m_D_Color_Shift_In_Time = 0.30f;
    this->m_D_Color_Shift_Out_Time = 0.70f;
    this->m_D_Center_Bounds = 10.00f;
    this->m_D_Center_Bounds_Blur = 0.80f;
    this->m_D_Out_Bounds = 85.00f;
    this->m_D_Out_Bounds_Blur = 13.00f;
    this->m_CoreLightEff = NULL;
    this->m_bCoreDisp = false;
    this->m_CloudDustEff = NULL;
    this->m_WaveRightCloudDustEff = NULL;
    this->m_WaveLeftCloudDustEff = NULL;
    this->m_EventFinishHitEff = NULL;
    this->m_pro_SmokeClass = NULL;
    this->m_ttBattleEndHp = 75;
    this->m_pro_bLightEnable = false;
    this->m_pro_LightCoefficient = 1.00f;
    this->m_pro_StLightTime = 0.50f;
    this->m_pro_EndLightTime = 0.50f;
    this->m_pro_ParamCollection = NULL;
}

