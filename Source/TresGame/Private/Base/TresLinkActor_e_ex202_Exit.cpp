#include "TresLinkActor_e_ex202_Exit.h"

class ATresLinkActor_e_ex202_Entry;

TArray<ATresLinkActor_e_ex202_Entry*> ATresLinkActor_e_ex202_Exit::GetEntryActors() const {
    return TArray<ATresLinkActor_e_ex202_Entry*>();
}

bool ATresLinkActor_e_ex202_Exit::CanUse() const {
    return false;
}

ATresLinkActor_e_ex202_Exit::ATresLinkActor_e_ex202_Exit() {
    this->m_Size = TRES_LINKACTOR_EX202_SIZE_25;
    this->m_bEnableCorrection = true;
    this->m_OffsetDistances[0] = 0.00f;
    this->m_OffsetDistances[1] = 0.00f;
    this->m_OffsetDistances[2] = 0.00f;
    this->m_AddMotionAlpha[0] = 0.00f;
    this->m_AddMotionAlpha[1] = 0.00f;
    this->m_AddMotionAlpha[2] = 0.00f;
}

