#include "TresBlackboardFloatValueModifierInOutParam.h"

FTresBlackboardFloatValueModifierInOutParam::FTresBlackboardFloatValueModifierInOutParam() {
    this->bEnableCheck = false;
    this->bUseBlackboardKey = false;
    this->MethodType = ETresBlackboardValueModifierInOutMethod::Set;
    this->Value = 0.00f;
}

