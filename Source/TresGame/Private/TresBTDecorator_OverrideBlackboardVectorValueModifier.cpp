#include "TresBTDecorator_OverrideBlackboardVectorValueModifier.h"

UTresBTDecorator_OverrideBlackboardVectorValueModifier::UTresBTDecorator_OverrideBlackboardVectorValueModifier() {
    this->m_ValueModifierType = ETresDecoratorVectorValueModifierMethod::Set;
    this->m_bUseBlackboard = false;
}

