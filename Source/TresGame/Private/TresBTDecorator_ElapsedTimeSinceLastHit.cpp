#include "TresBTDecorator_ElapsedTimeSinceLastHit.h"

UTresBTDecorator_ElapsedTimeSinceLastHit::UTresBTDecorator_ElapsedTimeSinceLastHit() {
    this->Operation = EArithmeticKeyOperation::Equal;
    this->m_Value = 0.00f;
    this->ActionDefinition = NULL;
}

