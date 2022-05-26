#include "SQEXSEADLayoutComponent.h"

USQEXSEADLayoutComponent::USQEXSEADLayoutComponent() {
    this->Sound = NULL;
    this->bIgnoreObstruction = false;
    this->bOverrideInteriorFactor = false;
    this->InteriorFactor = 0.00f;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->FadeTime = 0.00f;
    this->AudioComponent = NULL;
}

