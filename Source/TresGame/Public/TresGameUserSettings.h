#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "TresGameUserSettings.generated.h"

UCLASS()
class UTresGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    uint8 VolumetricRenderQuality;
    
    UPROPERTY(Config)
    uint8 UICharaRenderQuality;
    
    UPROPERTY(Config)
    uint8 SceneCaptureRenderQuality;
    
    UPROPERTY(Config)
    uint8 AOQuality;
    
    UPROPERTY(Config)
    uint8 AAType;
    
    UPROPERTY(Config)
    uint8 ShadowResolutionQuality;
    
    UPROPERTY(Config)
    uint8 TextureQuality;
    
    UPROPERTY(Config)
    uint8 FoliageQuality;
    
    UPROPERTY(Config)
    uint8 SSRQuality;
    
    UPROPERTY(Config)
    uint8 CharaLODQuality;
    
    UPROPERTY(Config)
    uint8 DisableLOD;
    
    UPROPERTY(Config)
    uint8 VolumetricFogQuality;
    
    UPROPERTY(Config)
    uint8 CapsuleShadowQuality;
    
    UPROPERTY(Config)
    uint8 BloomQuality;
    
    UPROPERTY(Config)
    uint8 MotionBlurQuality;
    
    UPROPERTY(Config)
    uint8 LensFlareQuality;
    
    UPROPERTY(Config)
    uint8 DepthOfFieldQuality;
    
    UPROPERTY(Config)
    uint8 DisableFog;
    
    UPROPERTY(Config)
    uint8 ResolutionScaleBase;
    
    UPROPERTY(Config)
    uint8 ResolutionScale;
    
    UPROPERTY(Config)
    int32 MaxFPS;
    
    UPROPERTY(Config)
    uint8 EnableFPSSettingToCutscene;
    
    UPROPERTY(Config)
    uint8 EnableShadowSettingToCutscene;
    
    UPROPERTY(Config)
    uint8 EnableHDR;
    
    UPROPERTY(Config)
    float HDRBloomBoost;
    
    UPROPERTY(Config)
    float HDRSceneColorBoost;
    
    UPROPERTY(Config)
    float HDRUIBrightness;
    
    UPROPERTY(Config)
    float HDRUIGamma;
    
    UPROPERTY(Config)
    uint8 ColorVisionDeficiencyType;
    
    UPROPERTY(Config)
    uint8 ColorVisionDeficiencySeverity;
    
    UPROPERTY(Config)
    uint8 ColorVisionDeficiencyCorrect;
    
    UPROPERTY(Config)
    uint8 ColorVisionDeficiencyShowCorrection;
    
    UPROPERTY(Config)
    uint8 GraphicsPreset;
    
    UPROPERTY(Config)
    int8 HDRBrightness;
    
public:
    UTresGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolutionSettings();
    
};

