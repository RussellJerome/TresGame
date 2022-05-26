#include "TresFriendLinkPawnBlizzagaBoard.h"

FRotator ATresFriendLinkPawnBlizzagaBoard::BP_GetRotationToBlizzagaBoardTarget() const {
    return FRotator{};
}

ATresFriendLinkPawnBlizzagaBoard::ATresFriendLinkPawnBlizzagaBoard() {
    this->m_ProjExp = NULL;
    this->m_Param_TackleSpeedFirst = 0.00f;
    this->m_Param_TackleSpeedAdd = 20000.00f;
    this->m_Param_TackleSpeedMax = 3500.00f;
    this->m_Param_TackleHomingPower = 15.00f;
}

