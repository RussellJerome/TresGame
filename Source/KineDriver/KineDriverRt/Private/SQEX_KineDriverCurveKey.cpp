#include "SQEX_KineDriverCurveKey.h"

FSQEX_KineDriverCurveKey::FSQEX_KineDriverCurveKey() {
    this->X = 0.00f;
    this->Y = 0.00f;
    this->LeftTanX = 0.00f;
    this->LeftTanY = 0.00f;
    this->RightTanX = 0.00f;
    this->RightTanY = 0.00f;
    this->InterpType = ESQEX_KD_InterpolateType_Step;
}

