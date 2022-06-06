#include "ManaVideoTrackInfo.h"

FManaVideoTrackInfo::FManaVideoTrackInfo() {
    this->FrameRate = 0.00f;
    this->TotalFrames = 0;
    this->bIsAlphaMovie = false;
    this->Type = EManaMovieType::SofdecPrime;
}

