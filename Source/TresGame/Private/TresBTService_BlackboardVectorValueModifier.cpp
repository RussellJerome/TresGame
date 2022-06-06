#include "TresBTService_BlackboardVectorValueModifier.h"

UTresBTService_BlackboardVectorValueModifier::UTresBTService_BlackboardVectorValueModifier() {
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_bUseBlackboard = false;
    this->m_Interval = 1.00f;
}

