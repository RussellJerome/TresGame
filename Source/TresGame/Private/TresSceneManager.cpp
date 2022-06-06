#include "TresSceneManager.h"

class ATresSnowShaderController;
class ATresOceanShaderController;
class UPrimitiveComponent;
class ATresKHShaderController;
class ATresGrassShaderController;

void ATresSceneManager::TrgSceneCapture(bool InIsEnableInvGamma, bool inIsSmartPhoneCameraCapture, bool inIsCampBackground) {
}

void ATresSceneManager::SetVFXBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetVFXBlur(float InTransitionTime, FTresVFXBlurParams InVFXBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetTextureStreamingBoost(float InVal) {
}

void ATresSceneManager::SetSnowShaderController(ATresSnowShaderController* TresSnowController) {
}

void ATresSceneManager::SetSnowRenderResolutionWidth(int32 inWidth) {
}

void ATresSceneManager::SetSnowRenderHeightRatio(float inHeightRatio) {
}

void ATresSceneManager::SetSnowRenderDepthLocation(FVector pos) {
}

void ATresSceneManager::SetSnowRenderCaptureOffset(float InOffset) {
}

void ATresSceneManager::SetScreenBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetScreenBlur(float InTransitionTime, FTresScreenBlurParams InScreenBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetSceneTintColorDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetSceneTintColor(float InTransitionTime, FLinearColor InColor, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetRadialBlur(float InTransitionTime, FTresRadialBlurParams InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetOceanSkyIntensity(float InIntensity) {
}

void ATresSceneManager::SetOceanShaderController(ATresOceanShaderController* TresOceanController) {
}

void ATresSceneManager::SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetKHShaderWorldType(TEnumAsByte<ESqexCPPKHSWorldType> WorldType) {
}

void ATresSceneManager::SetKHShaderController(ATresKHShaderController* TresKHShaderController) {
}

void ATresSceneManager::SetGrassShaderController(ATresGrassShaderController* TresGrassController) {
}

void ATresSceneManager::SetGrassParam(int32 InHandle, FVector InPos, float InRadius, float inPower, TEnumAsByte<ETresGrass::Type> InForceType, float inDetailPower) {
}

void ATresSceneManager::SetFringeIntensityDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetFringeIntensity(float InTransitionTime, float InIntensity, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetBloomRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::SetBloomRadialBlur(float InTransitionTime, FTresBloomRadialBlurParams InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject) {
}

void ATresSceneManager::ReqForceLoadLightmapTexture(float inSec) {
}

void ATresSceneManager::RemoveSnowRenderDepthPrimitive(UPrimitiveComponent* inPrimitive) {
}

void ATresSceneManager::RemoveKHShaderController(ATresKHShaderController* InTarget) {
}

void ATresSceneManager::ReleaseGrassParamHandle(int32 InHandle) {
}

ATresKHShaderController* ATresSceneManager::GetKHShaderController() {
    return NULL;
}

FVector2D ATresSceneManager::GetGrassWindDirection() {
    return FVector2D{};
}

int32 ATresSceneManager::GetGrassParamHandle(uint8 InPriority, bool IsForceget) {
    return 0;
}

void ATresSceneManager::ForceResetSceneEffectAll() {
}

void ATresSceneManager::ForceResetSceneEffect(ETresObjTypeProcChannel InChannel) {
}

void ATresSceneManager::EnableWallRunMaterialEffect(bool in_bEnable, float InTransitionTime) {
}

void ATresSceneManager::EnablePoleActionMaterialEffect(bool in_bEnable) {
}

void ATresSceneManager::EnableOcclusionCulling(bool inIsEnable) {
}

void ATresSceneManager::EnableJumpActionMaterialEffect(bool in_bEnable) {
}

void ATresSceneManager::EnableHopActionMaterialEffect(bool in_bEnable) {
}

void ATresSceneManager::EnableCaptureOnlyRendering(bool in_bEnable) {
}

void ATresSceneManager::EnableCapsuleMaxIndirectOcclusionLongDistance(bool in_bEnable, float inMaxDistance, ETresObjTypeProcChannel InChannel) {
}

void ATresSceneManager::EnableCampRenderMode(bool IsEnable) {
}

void ATresSceneManager::DisableSnowRenderDepthFollowPlayer(bool inbDisable) {
}

void ATresSceneManager::DisableOcclusionCullingOneFrame() {
}

void ATresSceneManager::DisableLight(bool isDisable, ETresObjTypeProcChannel InChannel) {
}

void ATresSceneManager::ClearSnowRenderDepth() {
}

bool ATresSceneManager::AddSnowRenderDepthPrimitive(UPrimitiveComponent* inPrimitive) {
    return false;
}

ATresSceneManager::ATresSceneManager() {
    this->m_MPCSysCommon = NULL;
}

