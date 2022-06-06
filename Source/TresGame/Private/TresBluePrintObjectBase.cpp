#include "TresBluePrintObjectBase.h"

void UTresBluePrintObjectBase::Tick_Implementation(float Delta) {
}

void UTresBluePrintObjectBase::InitBluePrint() {
}

void UTresBluePrintObjectBase::Init_Implementation() {
}

FName UTresBluePrintObjectBase::GetUserName() {
    return NAME_None;
}

void UTresBluePrintObjectBase::BeginPlayBluePrint_Implementation() {
}

UTresBluePrintObjectBase::UTresBluePrintObjectBase() {
    this->m_InitAfterExecute = false;
}

