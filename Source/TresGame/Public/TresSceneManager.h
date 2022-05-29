#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresObjTypeProcChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TresVFXBlurParams -FallbackName=TresVFXBlurParams
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TresScreenBlurParams -FallbackName=TresScreenBlurParams
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TresRadialBlurParams -FallbackName=TresRadialBlurParams
#include "ESqexCPPKHSWorldType.h"
#include "ETresGrass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TresBloomRadialBlurParams -FallbackName=TresBloomRadialBlurParams
#include "TresCameraAnim.h"
#include "UObject/NoExportTypes.h"
#include "TresSceneManager.generated.h"

class UMaterialParameterCollection;
class ATresSnowShaderController;
class ATresOceanShaderController;
class UPrimitiveComponent;
class ATresKHShaderController;
class ATresGrassShaderController;

UCLASS(NotPlaceable)
class ATresSceneManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaterialParameterCollection* m_MPCSysCommon;
    
public:
    ATresSceneManager();
    UFUNCTION(BlueprintCallable)
    void TrgSceneCapture(bool InIsEnableInvGamma, bool inIsSmartPhoneCameraCapture, bool inIsCampBackground);
    
    UFUNCTION(BlueprintCallable)
    void SetVFXBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetVFXBlur(float InTransitionTime, FTresVFXBlurParams InVFXBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureStreamingBoost(float InVal);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowShaderController(ATresSnowShaderController* TresSnowController);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowRenderResolutionWidth(int32 inWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowRenderHeightRatio(float inHeightRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowRenderDepthLocation(FVector pos);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowRenderCaptureOffset(float InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenBlur(float InTransitionTime, FTresScreenBlurParams InScreenBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION()
    void SetSceneTintColorDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION()
    void SetSceneTintColor(float InTransitionTime, FLinearColor InColor, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialBlur(float InTransitionTime, FTresRadialBlurParams InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetOceanSkyIntensity(float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetOceanShaderController(ATresOceanShaderController* TresOceanController);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION()
    void SetKHShaderWorldType(TEnumAsByte<ESqexCPPKHSWorldType> WorldType);
    
    UFUNCTION(BlueprintCallable)
    void SetKHShaderController(ATresKHShaderController* TresKHShaderController);
    
    UFUNCTION(BlueprintCallable)
    void SetGrassShaderController(ATresGrassShaderController* TresGrassController);
    
    UFUNCTION(BlueprintCallable)
    void SetGrassParam(int32 InHandle, FVector InPos, float InRadius, float inPower, TEnumAsByte<ETresGrass::Type> InForceType, float inDetailPower);
    
    UFUNCTION(BlueprintCallable)
    void SetFringeIntensityDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetFringeIntensity(float InTransitionTime, float InIntensity, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomRadialBlurDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomRadialBlur(float InTransitionTime, FTresBloomRadialBlurParams InRadialBlurParam, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void ReqForceLoadLightmapTexture(float inSec);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSnowRenderDepthPrimitive(UPrimitiveComponent* inPrimitive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKHShaderController(ATresKHShaderController* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrassParamHandle(int32 InHandle);
    
    UFUNCTION(BlueprintCallable)
    ATresKHShaderController* GetKHShaderController();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetGrassWindDirection();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGrassParamHandle(uint8 InPriority, bool IsForceget);
    
    UFUNCTION(BlueprintCallable)
    void ForceResetSceneEffectAll();
    
    UFUNCTION()
    void ForceResetSceneEffect(ETresObjTypeProcChannel InChannel);
    
    UFUNCTION(BlueprintCallable)
    void EnableWallRunMaterialEffect(bool in_bEnable, float InTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void EnablePoleActionMaterialEffect(bool in_bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableOcclusionCulling(bool inIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableJumpActionMaterialEffect(bool in_bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableHopActionMaterialEffect(bool in_bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableCaptureOnlyRendering(bool in_bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableCapsuleMaxIndirectOcclusionLongDistance(bool in_bEnable, float inMaxDistance, ETresObjTypeProcChannel InChannel);
    
    UFUNCTION()
    void EnableCampRenderMode(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void DisableSnowRenderDepthFollowPlayer(bool inbDisable);
    
    UFUNCTION(BlueprintCallable)
    void DisableOcclusionCullingOneFrame();
    
    UFUNCTION(BlueprintCallable)
    void DisableLight(bool isDisable, ETresObjTypeProcChannel InChannel);
    
    UFUNCTION(BlueprintCallable)
    void ClearSnowRenderDepth();
    
    UFUNCTION(BlueprintCallable)
    bool AddSnowRenderDepthPrimitive(UPrimitiveComponent* inPrimitive);
    
};

