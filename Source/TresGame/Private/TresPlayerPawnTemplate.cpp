#include "TresPlayerPawnTemplate.h"

void ATresPlayerPawnTemplate::_OnDtorStateForBind(TEnumAsByte<ETresStateID> eStateID) {
}

void ATresPlayerPawnTemplate::_OnCtorStateForBind(TEnumAsByte<ETresStateID> eStateID) {
}

ATresPlayerPawnTemplate::ATresPlayerPawnTemplate() {
    this->m_pAttackStateDataSet = NULL;
    this->m_StrongAddMotionSlotName = TEXT("FullBodyAdd");
    this->m_fAddReactionCoolDownTime = 0.00f;
}

