#include "TresGimmickComponentBase.h"

bool UTresGimmickComponentBase::BP_IsGimmickComponentActive() const {
    return false;
}

void UTresGimmickComponentBase::BP_DeactivateGimmickComponent() {
}

void UTresGimmickComponentBase::BP_ActivateGimmickComponent() {
}

UTresGimmickComponentBase::UTresGimmickComponentBase() {
    this->m_bIsGimmickActive = true;
    this->m_bOwnerHaveTeamNo = false;
    this->m_TeamNo = 255;
}

