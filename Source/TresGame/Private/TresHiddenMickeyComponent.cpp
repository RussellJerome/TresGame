#include "TresHiddenMickeyComponent.h"

bool UTresHiddenMickeyComponent::IsLuckyMarkRecorded() const {
    return false;
}

UTresHiddenMickeyComponent::UTresHiddenMickeyComponent() {
    this->m_bUseDefaultDetectMarkerBoundingAreaOnly = false;
    this->m_bUseAccurateBoundingArea = true;
    this->m_MickeyMarkSizeCircles.AddDefaulted(3);
}

