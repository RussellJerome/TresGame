#include "SQEXSEADAutoSeComponent.h"

USQEXSEADAutoSeComponent::USQEXSEADAutoSeComponent() {
    this->AutoSeCallback = NULL;
    this->SettingData = NULL;
    this->AssetTable = NULL;
    this->DetectionSetting = NULL;
    this->bEnableClip = true;
    this->bAlwaysMotionOnlyMode = false;
    this->CachedMeshReference = NULL;
    this->CachedMovementComponent = NULL;
}

