#include "SQEXSEADAttachSeComponent.h"

void USQEXSEADAttachSeComponent::Stop() {
}

USQEXSEADAttachSeComponent::USQEXSEADAttachSeComponent() {
    this->SoundAsset = NULL;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->bFollow = true;
    this->bFollowOwnerVisible = true;
    this->MyAudioComponent = NULL;
    this->MyAttachComponent = NULL;
}

