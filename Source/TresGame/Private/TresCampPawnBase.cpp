#include "TresCampPawnBase.h"

ATresCampPawnBase::ATresCampPawnBase() {
    this->m_bResetBonamikWhenAnimChange = false;
    this->m_bPreRollBonamikWhenAnimChange = true;
    this->m_BonamikPreRollNumDefault = 64;
    this->m_AnimType = TCPAID_NORMAL;
}

