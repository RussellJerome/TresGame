#include "TresBTDecorator_HateCheck.h"

UTresBTDecorator_HateCheck::UTresBTDecorator_HateCheck() {
    this->m_HateCompare = ETresHateCompare::Blackboard;
    this->m_ArithmeticOperation = EArithmeticKeyOperation::Equal;
    this->m_Value = 0.00f;
    this->m_bUseBlackboard = true;
}

