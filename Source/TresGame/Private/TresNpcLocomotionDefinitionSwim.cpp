#include "TresNpcLocomotionDefinitionSwim.h"

UTresNpcLocomotionDefinitionSwim::UTresNpcLocomotionDefinitionSwim() {
    this->m_MinWaterSurfaceSpeed = 200.00f;
    this->m_MaxWaterSurfaceSpeed = 370.00f;
    this->m_MinUnderWaterSpeed = 300.00f;
    this->m_MaxUnderWaterSpeed = 500.00f;
    this->m_bOnlyWaterSurface = false;
    this->m_InViewportSpeedRate = 1.10f;
    this->m_OutViewportSpeedRate = 2.50f;
}

