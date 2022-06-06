#include "TresBTDecorator_RandomEntry.h"

UTresBTDecorator_RandomEntry::UTresBTDecorator_RandomEntry() {
    this->m_ValueType = ETresRandomEntryProbabilitySource::LiteralValue;
    this->m_bUseBlackboard = false;
    this->m_bUseLiteral = true;
    this->m_LiteralValue = 0.00f;
}

