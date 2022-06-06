#include "TresFriendLinkPawnPromiseWings.h"

FRotator ATresFriendLinkPawnPromiseWings::BP_GetRotationToPromiseWingsTarget() const {
    return FRotator{};
}

ATresFriendLinkPawnPromiseWings::ATresFriendLinkPawnPromiseWings() {
    this->m_Param_TackleSpeedFirst = 0.00f;
    this->m_Param_TackleSpeedAdd = 20000.00f;
    this->m_Param_TackleSpeedMax = 3500.00f;
    this->m_Param_TackleHomingPower = 15.00f;
    this->m_Param_FinishSlowSpeed = 0.20f;
    this->m_Param_FinishSlowTime = 1.00f;
}

