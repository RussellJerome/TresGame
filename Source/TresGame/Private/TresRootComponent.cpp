#include "TresRootComponent.h"

UTresRootComponent::UTresRootComponent() {
    this->m_bEnableDetectPhysMaterial = false;
    this->m_bDrawBBox = true;
    this->m_pBodySetup = NULL;
    this->m_bEnableGrassBump = false;
    this->m_GrassBumpPriority = 0;
    this->m_GrassBumpRange = 200.00f;
    this->m_GrassBumpPower = 20.00f;
    this->m_GrassBumpDetailPower = 0.00f;
    this->m_GrassBumpForceType = ETresGrass::RADIAL;
    this->m_bNeedOceanSurfacePosture = false;
    this->m_pDetectPhysMaterial = NULL;
    this->m_pDetectWaterPhysMaterial = NULL;
    this->m_pDetectInnerWaterPhysMaterial = NULL;
}

