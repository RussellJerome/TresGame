#include "SQEX_KineDriverConnectEZParamLinkLinear.h"

FSQEX_KineDriverConnectEZParamLinkLinear::FSQEX_KineDriverConnectEZParamLinkLinear() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->Scale = 0.00f;
    this->Offset = 0.00f;
    this->ClampMin = 0.00f;
    this->ClampMax = 0.00f;
    this->EnableMin = false;
    this->EnableMax = false;
}

