#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresKHSBlendVolume.generated.h"

UCLASS()
class TRESGAME_API ATresKHSBlendVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsMatineeControled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MatineeWeightValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_KHSChrEmissivMultiCounter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_CameraLightingSwitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_ShadowColorMultiply: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_SSAOShadowPower: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_DarkAreaBoostMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_RefLightMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardColorA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardRotateA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardGradientA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardPowerA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardColorB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardGradientB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_BoardPowerB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_UseWLVModeA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVColorA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVGradientA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVPowerA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_UseWLVModeB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVColorB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVGradientB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVPowerB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_UseWLVAreaDepthA: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaLengthA0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaLengthA1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_UseWLVAreaDepthB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaLengthB0: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaLengthB1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_UseWLVAreaDepthFov: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaDepthInvert: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_WLVAreaDepthDarknessVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_RAMasterInstensity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_RAAOBoost: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 bOverride_RABrightnessBoost: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float KHSChrEmissivMultiCounter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float CameraLightingSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor ShadowColorMultiply;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float SSAOShadowPower;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DarkAreaBoostMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float RefLightMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor BoardColorA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BoardRotateA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BoardGradientA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BoardPowerA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor BoardColorB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BoardGradientB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BoardPowerB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float UseWLVModeA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FVector WLVA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor WLVColorA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVGradientA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVPowerA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float UseWLVModeB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FVector WLVB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor WLVColorB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVGradientB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVPowerB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float UseWLVAreaDepthA;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaLengthA0;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaLengthA1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float UseWLVAreaDepthB;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaLengthB1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaLengthB0;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float UseWLVAreaDepthFov;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaDepthInvert;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float WLVAreaDepthDarknessVolume;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float RAMasterInstensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float RAAOBoost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float RABrightnessBoost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float BlendRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    bool UsePlayerLocation;
    
    ATresKHSBlendVolume();
};

