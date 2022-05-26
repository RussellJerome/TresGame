#include "TresGameUserSettings.h"

void UTresGameUserSettings::SetToDefaults() {
}

void UTresGameUserSettings::ApplyNonResolutionSettings() {
}

UTresGameUserSettings::UTresGameUserSettings() {
    this->VolumetricRenderQuality = 0;
    this->UICharaRenderQuality = 0;
    this->SceneCaptureRenderQuality = 0;
    this->AOQuality = 2;
    this->AAType = 3;
    this->ShadowResolutionQuality = 1;
    this->TextureQuality = 0;
    this->FoliageQuality = 1;
    this->SSRQuality = 2;
    this->CharaLODQuality = 1;
    this->DisableLOD = 0;
    this->VolumetricFogQuality = 2;
    this->CapsuleShadowQuality = 1;
    this->BloomQuality = 3;
    this->MotionBlurQuality = 4;
    this->LensFlareQuality = 2;
    this->DepthOfFieldQuality = 2;
    this->DisableFog = 0;
    this->ResolutionScaleBase = 100;
    this->ResolutionScale = 100;
    this->MaxFPS = 60;
    this->EnableFPSSettingToCutscene = 1;
    this->EnableShadowSettingToCutscene = 0;
    this->EnableHDR = 0;
    this->HDRBloomBoost = 1.30f;
    this->HDRSceneColorBoost = 1.00f;
    this->HDRUIBrightness = 1.65f;
    this->HDRUIGamma = 1.30f;
    this->ColorVisionDeficiencyType = 0;
    this->ColorVisionDeficiencySeverity = 1;
    this->ColorVisionDeficiencyCorrect = 1;
    this->ColorVisionDeficiencyShowCorrection = 0;
    this->GraphicsPreset = 1;
    this->HDRBrightness = 0;
}

