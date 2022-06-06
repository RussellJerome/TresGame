#include "TresBlackboardIntValueModifierInOutParam.h"

FTresBlackboardIntValueModifierInOutParam::FTresBlackboardIntValueModifierInOutParam() {
    this->bEnableCheck = false;
    this->bUseBlackboardKey = false;
    this->MethodType = ETresBlackboardValueModifierInOutMethod::Set;
    this->Value = 0;
}

