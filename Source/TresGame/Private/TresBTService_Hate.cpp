#include "TresBTService_Hate.h"

UTresBTService_Hate::UTresBTService_Hate() {
    this->m_HateModifier = ETresHateModifier::Blackboard;
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_Value = 0.00f;
    this->m_bUseBlackboard = true;
}

