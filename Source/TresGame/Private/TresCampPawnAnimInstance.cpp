#include "TresCampPawnAnimInstance.h"

class ATresCampPawnBase;

ATresCampPawnBase* UTresCampPawnAnimInstance::TryGetTresCampPawnOwner() {
    return NULL;
}

UTresCampPawnAnimInstance::UTresCampPawnAnimInstance() {
    this->m_AnimType = TCPAID_NORMAL;
}

