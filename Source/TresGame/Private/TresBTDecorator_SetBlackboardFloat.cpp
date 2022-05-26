#include "TresBTDecorator_SetBlackboardFloat.h"

UTresBTDecorator_SetBlackboardFloat::UTresBTDecorator_SetBlackboardFloat() {
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_bUseBB = false;
    this->m_LiteralValue = 0.00f;
}

