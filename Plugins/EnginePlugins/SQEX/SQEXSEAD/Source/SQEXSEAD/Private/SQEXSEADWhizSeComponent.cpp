#include "SQEXSEADWhizSeComponent.h"

USQEXSEADWhizSeComponent::USQEXSEADWhizSeComponent() {
    this->SoundAsset = NULL;
    this->ApproachJudgmentDistance = 250.00f;
    this->ApproachJudgmentVelocity = 0.00f;
    this->bFollow = true;
    this->bOnlyOnce = true;
    this->bUseRelativeVelocity = false;
    this->bCalcVelocityFromLocation = false;
    this->MyAudioComponent = NULL;
    this->MyMeshComponent = NULL;
}

