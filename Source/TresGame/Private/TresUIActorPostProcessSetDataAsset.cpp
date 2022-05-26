#include "TresUIActorPostProcessSetDataAsset.h"

UTresUIActorPostProcessSetDataAsset::UTresUIActorPostProcessSetDataAsset() {
    this->FilmContrast = 0.00f;
    this->FilmHealAmount = 0.00f;
    this->FilmDynamicRange = 1.00f;
    this->ColorGradingLUT = NULL;
    this->AmbientCubemapIntensity = 0.00f;
    this->AmbientCubemap = NULL;
    this->AutoExposureBias = 0.00f;
}

