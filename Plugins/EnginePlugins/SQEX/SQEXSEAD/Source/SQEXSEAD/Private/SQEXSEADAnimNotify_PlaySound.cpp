#include "SQEXSEADAnimNotify_PlaySound.h"

USQEXSEADAnimNotify_PlaySound::USQEXSEADAnimNotify_PlaySound() {
    this->Sound = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->FadeInDuration = 0.00f;
    this->bFollow = true;
    this->bFollowOwnerVisible = true;
}

