#include "TresEnemyEx353RootMotionScaleInfo.h"

FTresEnemyEx353RootMotionScaleInfo::FTresEnemyEx353RootMotionScaleInfo() {
    this->RootMotionCorrectionKind = ETresEnemyEx353RootMotionCorrectionKind::CurveData;
    this->RootMotionScaleCurveData = NULL;
    this->ChangeCorrectionKindDistance = 0.00f;
    this->MaxRootMotionScale = 0.00f;
    this->AimTargetBackDistance = 0.00f;
}

