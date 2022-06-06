#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESqexCPPKHSWorldType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresKHShaderController.generated.h"

class UMaterialInterface;

UCLASS()
class TRESGAME_API ATresKHShaderController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaterialInterface* m_CurrentPostProcessMaterial;
    
public:
    ATresKHShaderController();
    UFUNCTION(BlueprintImplementableEvent)
    void SetKHSSceneEmissiveCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKHSEnvVolCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPostProcessMaterial(UMaterialInterface* inMaterial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PostParamResetAll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PostInterpChange();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PostEnableCampRenderMode(bool isCampMode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ChangeWorldType(ESqexCPPKHSWorldType inValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVPowerB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVPowerA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVGradientB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVGradientA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVColorB(FLinearColor inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVColorA(FLinearColor inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaLengthB1(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaLengthB0(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaLengthA1(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaLengthA0(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaDepthInvert(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVAreaDepthDarknessVolume(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendWLVA(FVector inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVModeB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVModeA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVB(FVector inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVAreaDepthFov(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVAreaDepthB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendUseWLVAreaDepthA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendSSAOShadowPower(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendShadowColorMultiply(FLinearColor inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendRefLightMode(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendRAMasterIntensity(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendRABrightnessBoost(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendRAAOBoost(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendKHSChrEmissivMultiCounter(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendDarkAreaBoostMode(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendCameraLightingSwitch(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardRotateA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardPowerB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardPowerA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardGradientB(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardGradientA(float inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardColorB(FLinearColor inValue, float Weight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BlendBoardColorA(FLinearColor inValue, float Weight);
    
};

