#include "LockAtChangeInfo.h"

FLockAtChangeInfo::FLockAtChangeInfo() {
    this->m_fChangeDot = 0.00f;
    this->m_eInterpFunction = VTBlend_Linear;
    this->m_fInterpSec = 0.00f;
    this->m_fInterpExp = 0.00f;
}

