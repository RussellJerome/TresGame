#include "SQEX_BonamikSolverDesc.h"

FSQEX_BonamikSolverDesc::FSQEX_BonamikSolverDesc() {
    this->m_GroupID = 0;
    this->m_IsEnable = false;
    this->m_IsUseConeSEQ = false;
    this->m_IsEnableDraw = false;
    this->m_ColIter = 0;
    this->m_ConsIter = 0;
    this->m_ConeIter = 0;
    this->m_LinkIter = 0;
    this->m_SolverIter = 0;
    this->m_TagId = 0;
    this->m_CollisionTagId = 0;
    this->m_EnableGround = false;
    this->m_LODdistance = 0.00f;
    this->m_RefUpVec = 0;
}

