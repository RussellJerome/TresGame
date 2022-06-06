#include "SQEXSEADAnimNotifyState_AttachSound.h"

USQEXSEADAnimNotifyState_AttachSound::USQEXSEADAnimNotifyState_AttachSound() {
    this->Sound = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->StartWaitTime = 0.00f;
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
    this->bFollow = true;
    this->LoopEndSound = NULL;
    this->LoopEndSoundVolumeMultiplier = 1.00f;
    this->LoopEndSoundPitchMultiplier = 1.00f;
    this->bFollowOwnerVisible = false;
}

