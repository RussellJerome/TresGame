#include "TresBTTask_Rage.h"

UTresBTTask_Rage::UTresBTTask_Rage() {
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_ValueType = ETresRageSource::LiteralValue;
    this->m_Value = 0.00f;
    this->m_bUseLiteral = true;
    this->m_bUseBlackboard = false;
}

