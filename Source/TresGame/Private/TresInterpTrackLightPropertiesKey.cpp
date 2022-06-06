#include "TresInterpTrackLightPropertiesKey.h"

FTresInterpTrackLightPropertiesKey::FTresInterpTrackLightPropertiesKey() {
    this->m_Time = 0.00f;
    this->m_MinRoughness = 0.00f;
    this->m_ShadowResolutionScale = 0.00f;
    this->m_ShadowBias = 0.00f;
    this->m_DynamicShadowDistanceMovableLight = 0.00f;
    this->m_DynamicShadowDistanceStationaryLight = 0.00f;
    this->m_DynamicShadowCascades = 0;
    this->m_CascadeDistributionExponent = 0.00f;
}

