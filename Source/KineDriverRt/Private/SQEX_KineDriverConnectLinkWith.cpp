#include "SQEX_KineDriverConnectLinkWith.h"

FSQEX_KineDriverConnectLinkWith::FSQEX_KineDriverConnectLinkWith() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->ExtrapType = ESQEX_KD_ExtrapolateType_Constant;
}

