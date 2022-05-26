#include "SQEX_BonamikPlaneDesc.h"

FSQEX_BonamikPlaneDesc::FSQEX_BonamikPlaneDesc() {
    this->m_GroupID = 0;
    this->m_ParticleA = 0;
    this->m_ParticleB = 0;
    this->m_ParticleC = 0;
    this->m_Index = 0;
    this->m_Thickness = 0.00f;
    this->m_Offset = 0.00f;
    this->m_IsCollision = false;
    this->m_CollisionBatchNo = 0;
    this->m_ColId[0] = 0;
    this->m_ColId[1] = 0;
    this->m_ColId[2] = 0;
    this->m_ColId[3] = 0;
    this->m_ColId[4] = 0;
    this->m_ColId[5] = 0;
    this->m_ColId[6] = 0;
    this->m_ColId[7] = 0;
}

