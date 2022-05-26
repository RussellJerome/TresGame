#include "TresInterpTrackLightProperties.h"

UTresInterpTrackLightProperties::UTresInterpTrackLightProperties() {
    this->m_IncludeChildActors = false;
    this->m_Restore = true;
    this->m_EnableMinRoughness = false;
    this->m_EnableShadowResolutionScale = false;
    this->m_EnableShadowBias = false;
    this->m_EnableDynamicShadowDistanceMovableLight = false;
    this->m_EnableDynamicShadowDistanceStationaryLight = false;
    this->m_EnableDynamicShadowCascades = false;
    this->m_EnableCascadeDistributionExponent = false;
}

