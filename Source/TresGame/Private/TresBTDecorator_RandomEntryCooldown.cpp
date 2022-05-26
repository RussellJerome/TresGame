#include "TresBTDecorator_RandomEntryCooldown.h"

UTresBTDecorator_RandomEntryCooldown::UTresBTDecorator_RandomEntryCooldown() {
    this->m_ValueType = ETresRandomEntryCooldownProbabilitySource::LiteralValue;
    this->m_bUseBlackboard = false;
    this->m_bUseLiteral = true;
    this->m_LiteralValue = 1.00f;
    this->m_CooldownTime = 10.00f;
}

