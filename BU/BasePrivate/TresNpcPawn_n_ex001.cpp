#include "TresNpcPawn_n_ex001.h"

bool ATresNpcPawn_n_ex001::IsRideOn() {
    return false;
}

ATresNpcPawn_n_ex001::ATresNpcPawn_n_ex001() {
    this->m_PawnID = TEXT("n_ex001");
    this->m_MarshmallowRange2D = 2000.00f;
    this->m_FRCallMeteorBP = NULL;
    this->m_FRFlareForceBP = NULL;
    this->m_pMarshmallowPawn = NULL;
    this->m_AppendCure = 120;
    this->m_IsLinkMode = false;
}

