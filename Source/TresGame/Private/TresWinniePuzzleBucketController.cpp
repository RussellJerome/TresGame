#include "TresWinniePuzzleBucketController.h"

UTresWinniePuzzleBucketController::UTresWinniePuzzleBucketController() {
    this->BucketRef = NULL;
    this->SpecialBucketRef = NULL;
    this->BucketHorizontalSpacing = 0.00f;
    this->BucketVerticalSpacing = 0.00f;
    this->FillMoveType = WinniePuzzleBucketFillMoveType::InOrder;
    this->FillWaitTime = 0.00f;
    this->FillMoveSpeed = 0.00f;
    this->FillMoveHeight = 0.00f;
    this->FillMoveDelayTimeCorrectionValue = 0.00f;
    this->FillMoveDelayTimeCorrectionRandomValueMin = 0.00f;
    this->FillMoveDelayTimeCorrectionRandomValueMax = 0.00f;
    this->FillMoveLandingParticle = NULL;
    this->StoreUnitParticle = NULL;
    this->DecreaseWaitTime = 0.00f;
    this->DecreaseMoveSpeed = 0.00f;
    this->DecreaseMoveHeight = 0.00f;
    this->ExistingBuckedMoveSpeedWhenDecrease = 0.00f;
    this->UnitPlaceLocationZSpacing = 0.00f;
    this->m_pDecTargetBucket = NULL;
}

