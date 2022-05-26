#include "SQEXSEADAnimNotifyPlayAutoSeParams.h"

FSQEXSEADAnimNotifyPlayAutoSeParams::FSQEXSEADAnimNotifyPlayAutoSeParams() {
    this->SourceType = ESQEXSEADANPlayAutoSeSourceType::MotionSoundType;
    this->MotionSoundType = ESQEXSEADAutoSeMotionSoundType::None;
    this->SurfaceAssetPathTable = NULL;
    this->AutoSePartsType = ESQEXSEADAutoSePartsType::Invalid;
    this->AutoSePartsIndex = 0;
    this->bCheckIsGrounded = false;
    this->bAttachToParts = false;
    this->SoundVolume = 0.00f;
    this->SoundPitchMultiplier = 0.00f;
    this->bFollowOwnerVisible = false;
}

