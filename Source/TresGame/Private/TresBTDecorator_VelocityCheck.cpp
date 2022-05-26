#include "TresBTDecorator_VelocityCheck.h"

UTresBTDecorator_VelocityCheck::UTresBTDecorator_VelocityCheck() {
    this->Operation = EArithmeticKeyOperation::Equal;
    this->TestVelocity = 200.00f;
    this->TestMode = ETresVelocityTestMode::VelocityZ;
}

