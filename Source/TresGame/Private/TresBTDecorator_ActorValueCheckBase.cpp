#include "TresBTDecorator_ActorValueCheckBase.h"

UTresBTDecorator_ActorValueCheckBase::UTresBTDecorator_ActorValueCheckBase() {
    this->m_BBActorName = TEXT("SelfActor");
    this->m_Operation = EArithmeticKeyOperation::Equal;
    this->m_bUseBB = false;
    this->m_CheckValue = 0.00f;
}

