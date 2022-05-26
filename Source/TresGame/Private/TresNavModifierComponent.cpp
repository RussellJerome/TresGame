#include "TresNavModifierComponent.h"

void UTresNavModifierComponent::SetUpdateNavigation(bool bEnabled) {
}

void UTresNavModifierComponent::RefreshNavModifier() {
}

UTresNavModifierComponent::UTresNavModifierComponent() {
    this->m_bManualCalcBounds = false;
    this->m_bAccurateNavigationData = false;
}

