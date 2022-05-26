#include "TresHologramWorldInitParam.h"

FTresHologramWorldInitParam::FTresHologramWorldInitParam() {
    this->World = TRES_WCID_EX;
    this->ValueType = EHologramWorldInitParamValueType::Float;
    this->FloatValue = 0.00f;
}

