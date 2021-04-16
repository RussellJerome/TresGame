// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSceneManager.generated.h"

UCLASS()
class TRESGAME_API ATresSceneManager : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = TresSceneManager)
	class UMaterialParameterCollection* m_MPCSysCommon;

	/*void TrgSceneCapture(bool InIsEnableInvGamma, bool inIsSmartPhoneCameraCapture, bool inIsCampBackground);
	void SetVFXBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetVFXBlur(float InTransitionTime, const struct FTresVFXBlurParams& InVFXBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetTextureStreamingBoost(float InVal);
	void SetSnowShaderController(class ATresSnowShaderController* TresSnowController);
	void SetSnowRenderResolutionWidth(int inWidth);
	void SetSnowRenderHeightRatio(float inHeightRatio);
	void SetSnowRenderDepthLocation(const struct FVector& pos);
	void SetSnowRenderCaptureOffset(float InOffset);
	void SetScreenBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetScreenBlur(float InTransitionTime, const struct FTresScreenBlurParams& InScreenBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetSceneTintColorDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetSceneTintColor(float InTransitionTime, const struct FLinearColor& InColor, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetRadialBlur(float InTransitionTime, const struct FTresRadialBlurParams& InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetOceanSkyIntensity(float InIntensity);
	void SetOceanShaderController(class ATresOceanShaderController* TresOceanController);
	void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetKHShaderWorldType(TEnumAsByte<ESqexCPPKHSWorldType> WorldType);
	void SetKHShaderController(class ATresKHShaderController* TresKHShaderController);
	void SetGrassShaderController(class ATresGrassShaderController* TresGrassController);
	void SetGrassParam(int InHandle, const struct FVector& InPos, float InRadius, float inPower, TEnumAsByte<ETresGrass> InForceType, float inDetailPower);
	void SetFringeIntensityDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetFringeIntensity(float InTransitionTime, float InIntensity, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetBloomRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void SetBloomRadialBlur(float InTransitionTime, const struct FTresBloomRadialBlurParams& InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
	void ReqForceLoadLightmapTexture(float inSec);
	void RemoveSnowRenderDepthPrimitive(class UPrimitiveComponent* inPrimitive);
	void RemoveKHShaderController(class ATresKHShaderController* InTarget);
	void ReleaseGrassParamHandle(int InHandle);
	class ATresKHShaderController* GetKHShaderController();
	struct FVector2D GetGrassWindDirection();
	int GetGrassParamHandle(unsigned char InPriority, bool IsForceget);
	void ForceResetSceneEffectAll();
	void ForceResetSceneEffect(ETresObjTypeProcChannel InChannel);
	void EnableWallRunMaterialEffect(bool in_bEnable, float InTransitionTime);
	void EnablePoleActionMaterialEffect(bool in_bEnable);
	void EnableOcclusionCulling(bool inIsEnable);
	void EnableJumpActionMaterialEffect(bool in_bEnable);
	void EnableHopActionMaterialEffect(bool in_bEnable);
	void EnableCaptureOnlyRendering(bool in_bEnable);
	void EnableCapsuleMaxIndirectOcclusionLongDistance(bool in_bEnable, float inMaxDistance, ETresObjTypeProcChannel InChannel);
	void EnableCampRenderMode(bool IsEnable);
	void DisableSnowRenderDepthFollowPlayer(bool inbDisable);
	void DisableOcclusionCullingOneFrame();
	void DisableLight(bool isDisable, ETresObjTypeProcChannel InChannel);
	void ClearSnowRenderDepth();
	bool AddSnowRenderDepthPrimitive(class UPrimitiveComponent* inPrimitive);*/
	
};
