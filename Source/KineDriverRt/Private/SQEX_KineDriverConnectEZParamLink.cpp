#include "SQEX_KineDriverConnectEZParamLink.h"

FSQEX_KineDriverConnectEZParamLink::FSQEX_KineDriverConnectEZParamLink() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->PX0 = 0.00f;
    this->VX1_0 = 0.00f;
    this->VX2_1 = 0.00f;
    this->Grad0 = 0.00f;
    this->Grad1 = 0.00f;
    this->PY0 = 0.00f;
    this->PY0A = 0.00f;
    this->PY0B = 0.00f;
    this->PY1 = 0.00f;
    this->PY1A = 0.00f;
    this->PY1B = 0.00f;
    this->PY2 = 0.00f;
    this->ByCoef = false;
}

