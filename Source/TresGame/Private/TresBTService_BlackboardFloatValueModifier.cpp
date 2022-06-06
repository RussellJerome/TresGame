#include "TresBTService_BlackboardFloatValueModifier.h"

UTresBTService_BlackboardFloatValueModifier::UTresBTService_BlackboardFloatValueModifier() {
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_Value = 1.00f;
    this->m_ValueRandomDeviation = 0.00f;
    this->m_bUseBlackboard = false;
    this->m_Interval = 1.00f;
}

