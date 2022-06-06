#include "TresGumiShipFSMState.h"

class AActor;

void UTresGumiShipFSMState::Setup(AActor* pUser, const int32 dStateID, const FName& StateName) {
}

void UTresGumiShipFSMState::SetStep(int32 dIn) {
}




bool UTresGumiShipFSMState::IsFinishedState() const {
    return false;
}

void UTresGumiShipFSMState::Initialize() {
}

void UTresGumiShipFSMState::IncrementStep() {
}

int32 UTresGumiShipFSMState::GetStep() const {
    return 0;
}

FName UTresGumiShipFSMState::GetStateName() const {
    return NAME_None;
}

int32 UTresGumiShipFSMState::GetStateID() const {
    return 0;
}

void UTresGumiShipFSMState::DecrementStep() {
}

bool UTresGumiShipFSMState::CanCancelState() const {
    return false;
}

void UTresGumiShipFSMState::_SetEnableCancelState(bool bIn) {
}

FTresGumiShipStateArgs UTresGumiShipFSMState::_GetArgs() const {
    return FTresGumiShipStateArgs{};
}

void UTresGumiShipFSMState::_FinishState() {
}

UTresGumiShipFSMState::UTresGumiShipFSMState() {
}

