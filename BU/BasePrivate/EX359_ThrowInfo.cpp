#include "EX359_ThrowInfo.h"

FEX359_ThrowInfo::FEX359_ThrowInfo() {
    this->m_fStopTime = 0.00f;
    this->m_bStopTime = false;
    this->m_fLifeTime = 0.00f;
    this->m_bLifeTime = false;
    this->m_iNoStopOnHit = false;
    this->m_iNoDestroyOnHit = false;
    this->m_fLifeTimeAfterHit = 0.00f;
}

