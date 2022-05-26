#include "TresTaskBase.h"

bool UTresTaskBase::IsSetup() {
    return false;
}

bool UTresTaskBase::IsEnable() {
    return false;
}

void UTresTaskBase::Destroy() {
}







UTresTaskBase::UTresTaskBase() {
    this->m_pParent = NULL;
    this->m_pParentActor = NULL;
}

