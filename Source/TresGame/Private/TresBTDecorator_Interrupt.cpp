#include "TresBTDecorator_Interrupt.h"

UTresBTDecorator_Interrupt::UTresBTDecorator_Interrupt() {
    this->EventType = EInterruptableEvent::IE_OnDamage;
    this->CustomAbortBehavior = EInterruptAbortBehavior::DenyOnNormalExecution;
}

