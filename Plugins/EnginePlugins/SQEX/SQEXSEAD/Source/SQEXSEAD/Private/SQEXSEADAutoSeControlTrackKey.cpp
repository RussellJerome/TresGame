#include "SQEXSEADAutoSeControlTrackKey.h"

FSQEXSEADAutoSeControlTrackKey::FSQEXSEADAutoSeControlTrackKey() {
    this->Time = 0.00f;
    this->bUseGlobalEnable = false;
    this->bGlobalEnable = false;
    this->bUseEnable = false;
    this->bEnable = false;
    this->bUseVolumeScale = false;
    this->VolumeScale = 0.00f;
    this->bUseDisableAnimNotifyPlayAutoSE = false;
    this->bDisableAnimNotifyPlayAutoSE = false;
    this->bUseEnableForceOverridePhysicalSurface = false;
    this->bEnableForceOverridePhysicalSurface = false;
    this->PhysicalSurfaceForForceOverride = SurfaceType_Default;
    this->bUseAssumeFootMotionlessMoveLength = false;
    this->AssumeFootMotionlessMoveLength = 0.00f;
}

