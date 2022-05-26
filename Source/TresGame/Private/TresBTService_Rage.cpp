#include "TresBTService_Rage.h"

UTresBTService_Rage::UTresBTService_Rage() {
    this->m_ValueModifierType = ETresValueModifierMethod::Set;
    this->m_Value = 0.00f;
    this->m_ValueRandomDeviation = 0.00f;
    this->m_Interval = 1.00f;
}

