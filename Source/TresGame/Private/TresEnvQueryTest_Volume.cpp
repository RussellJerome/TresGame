#include "TresEnvQueryTest_Volume.h"
#include "GameFramework/Volume.h"

UTresEnvQueryTest_Volume::UTresEnvQueryTest_Volume() {
    this->VolumeClass = AVolume::StaticClass();
    this->bSkipIfNoVolumeFound = true;
    this->bCheckTags = false;
}

