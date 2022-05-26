#include "TresProjectionGridComponent.h"

UTresProjectionGridComponent::UTresProjectionGridComponent() {
    this->m_pGridMaterial = NULL;
    this->m_pOpaqueMaterial = NULL;
    this->m_pMaskedMaterial = NULL;
    this->m_pTranslucencyMaterial = NULL;
    this->m_GridSizeX = 100;
    this->m_GridSizeY = 100;
    this->m_DivisionNum = 10;
    this->m_Amplitude = 100.00f;
    this->m_ProjectionZ = 0.00f;
    this->m_TranslucentDistance = 2000.00f;
    this->m_BlendDistance = 3000.00f;
    this->m_DebugDraw = true;
    this->m_FreezingUpdate = false;
}

