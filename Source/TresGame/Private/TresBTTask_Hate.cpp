#include "TresBTTask_Hate.h"

UTresBTTask_Hate::UTresBTTask_Hate() {
    this->m_HateModifier = ETresHateModifier::Blackboard;
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_Value = 0.00f;
    this->m_bUseBlackboard = true;
}

