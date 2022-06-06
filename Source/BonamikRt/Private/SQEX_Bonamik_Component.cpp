#include "SQEX_Bonamik_Component.h"

class USQEX_Bonamik_Component;

void USQEX_Bonamik_Component::SQEX_SetEmissiveWindScale(const TArray<FString>& Groups, const float Scale, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_TurnOff(bool preserveLatestResult, const TArray<FString>& Groups, float BlendTime) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetWorldWindScale(const TArray<FString>& Groups, float Scale) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetWeight(float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetUpdateOnlyVisible(bool bUpdateOnlyVisible) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetUpdateOnlyRendered(bool bUpdateOnlyRendered) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetTeleportDistance(float Distance, int32 TeleportPreRollStep, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetSpeedRate(float SpeedRate, float SpeedRateChangeTime, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetPresetWindScale(const TArray<FName>& PresetNames, const float Scale) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetPreRoll(int32 step, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetOuterConeScale(const TArray<FString>& Groups, float Scale) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetLocalForceScale(const TArray<FString>& Groups, float Scale) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetInnerConeScale(const TArray<FString>& Groups, float Scale) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetGroupWeight(const TArray<FString>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetGravity(const FVector& Gravity) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetEnableGroundCollisionAll(bool bNewEnable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetEnableGroundCollision(const TArray<FString>& Groups, bool bNewEnable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetEnable(bool NewEnable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetEmissiveWind(const TArray<FString>& Groups, int32 DirectionSpace, const FVector& DirectionVec, float BaseStrength, float WaveAmplitude, float WaveFreq, float BlendTime, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetAutoDisable(bool AutoDisable) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_SetAnimPos(int32 BoneIndex, bool bForceSet) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RestoreGroupParam(const TArray<FSQEX_BonamikChangingParameter>& GroupParam) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RestoreDefaultParameters() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_ResetGravity() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RemoveReferenceDefault() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RemoveReferenceCommon(USQEX_Bonamik_Component* OtherComponent) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RemoveReferenceAll() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_RemoveReference(USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_ReinitializeSimulationPose() {
}

bool USQEX_Bonamik_Component::SQEX_Bonamik_IsSetup() {
    return false;
}

bool USQEX_Bonamik_Component::SQEX_Bonamik_IsEnable() {
    return false;
}

bool USQEX_Bonamik_Component::SQEX_Bonamik_IsAutoDisable() {
    return false;
}

float USQEX_Bonamik_Component::SQEX_Bonamik_GetWeight() {
    return 0.0f;
}

float USQEX_Bonamik_Component::SQEX_Bonamik_GetTeleportDistance() {
    return 0.0f;
}

float USQEX_Bonamik_Component::SQEX_Bonamik_GetSpeedRate() const {
    return 0.0f;
}

FVector USQEX_Bonamik_Component::SQEX_Bonamik_GetGravity() const {
    return FVector{};
}

void USQEX_Bonamik_Component::SQEX_Bonamik_EnablePresetWind(const TArray<FName>& PresetNames) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_DisablePresetWind(const TArray<FName>& PresetNames) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_ClearEmissiveWind(float BlendTime, bool bApplyToChildren) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_ClearAllPresetWind() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_AddReferenceDefault() {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_AddReferenceCommon(USQEX_Bonamik_Component* OtherComponent) {
}

void USQEX_Bonamik_Component::SQEX_Bonamik_AddReference(USQEX_Bonamik_Component* OtherComponent, const FString& ReferenceGroupName) {
}

USQEX_Bonamik_Component::USQEX_Bonamik_Component() {
    this->bHasSkeletalMeshSkippedTransforms = false;
    this->m_BonamikAsset = NULL;
    this->SkeletalMeshComponent = NULL;
    this->CharacterMovementComponent = NULL;
    this->m_BonamikEnable = false;
    this->m_BonamikAutoDisable = false;
    this->bAccurateBoundsUpdate = false;
    this->PreRollStepOnResume = 0;
    this->PrevScreenSize = 100000002004087734272.00f;
}

