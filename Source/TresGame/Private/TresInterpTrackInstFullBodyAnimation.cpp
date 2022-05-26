#include "TresInterpTrackInstFullBodyAnimation.h"

UTresInterpTrackInstFullBodyAnimation::UTresInterpTrackInstFullBodyAnimation() {
    this->LastUpdatePosition = 0.00f;
    this->LastKeyIndex = 0;
    this->InitialMeshScale = 0.00f;
    this->LastMeshScale = 0.00f;
    this->ForcedLOD = 0;
    this->bEnableUpdateRateOptimizations = false;
}

