#include "TresAnimNode_TwoBoneIKMultiped.h"

FTresAnimNode_TwoBoneIKMultiped::FTresAnimNode_TwoBoneIKMultiped() {
    this->bUseMayaSolver = false;
    this->HipsOffsetPercentage = 0.00f;
    this->HipsRotationLimit = 0.00f;
    this->HipsRotationResetLimit = 0.00f;
    this->bLimitHipsTransHeight = false;
    this->bExHitpsRotateDetect = false;
    this->ExHitpsRotateDetectSampleNum = 0;
    this->ExHitpsRotateDetectRadius = 0.00f;
    this->ExHitpsRotateDetectCheckMax = 0.00f;
    this->ExHitpsRotateDetectCheckMin = 0.00f;
    this->MyDeltaTime = 0.00f;
    this->RaycastCacheMaximumTranslation = 0.00f;
    this->RaycastCacheMaximumRotation = 0.00f;
    this->RaycastForceFrameRate = 0;
    this->m_RaycastCacheRootDisplacement = false;
    this->m_KeepHighestRaycastHitInSmallRadius = false;
    this->m_KeepHighest_XY_MaxRadius = 0.00f;
    this->m_KeepHighest_Z_Displacement = 0.00f;
    this->FootSmoothingVelocity = 0.00f;
    this->TimeStartSmoothing = 0.00f;
    this->DrawDebug = false;
}

