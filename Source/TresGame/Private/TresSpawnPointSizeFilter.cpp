#include "TresSpawnPointSizeFilter.h"

UTresSpawnPointSizeFilter::UTresSpawnPointSizeFilter() {
    this->m_Radius = 0.00f;
    this->m_Height = 0.00f;
    this->m_RadiusFilterType = ETresSpawnPointRadiusFilterType_DoNotCare;
    this->m_HeightFilterType = ETresSpawnPointHeightFilterType_DoNotCare;
}

