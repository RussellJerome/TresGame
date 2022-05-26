#include "SQEX_EffectCurveData.h"

FSQEX_EffectCurveData::FSQEX_EffectCurveData() {
    this->ParamAxis = FSQEX_EFFCT_CURVE_DATA_AXIS_SCALE;
    this->CurveData = NULL;
    this->bUseCurveAsset = false;
    this->bUseParameterX = false;
    this->bUseParameterY = false;
    this->bUseParameterZ = false;
}

