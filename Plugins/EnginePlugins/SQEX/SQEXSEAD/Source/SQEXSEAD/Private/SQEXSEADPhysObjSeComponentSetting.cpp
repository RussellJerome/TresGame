#include "SQEXSEADPhysObjSeComponentSetting.h"

USQEXSEADPhysObjSeComponentSetting::USQEXSEADPhysObjSeComponentSetting() {
    this->HitSE = NULL;
    this->bEnableSwithHitSE = false;
    this->VelocitySE = NULL;
    this->HitImpulseThreshold = 2000.00f;
    this->HitDistanceThreshold = 10.00f;
    this->VelocityThreshold = 10.00f;
    this->VelocityAudioFadeOutTime = 1.00f;
}

