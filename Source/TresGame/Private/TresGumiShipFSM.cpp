#include "TresGumiShipFSM.h"
#include "Templates/SubclassOf.h"

class UTresGumiShipFSMState;

void UTresGumiShipFSM::RegisterState(const int32 dStateID, const FName& rstrStateName, const TSubclassOf<UTresGumiShipFSMState>& rStateClass) {
}

void UTresGumiShipFSM::PushState(const int32 dStateID) {
}

bool UTresGumiShipFSM::IsFinishedCurrentState() const {
    return false;
}

FName UTresGumiShipFSM::GetCurrentStateName() const {
    return NAME_None;
}

int32 UTresGumiShipFSM::GetCurrentStateID() const {
    return 0;
}

bool UTresGumiShipFSM::ChangeStateWithArgs(const int32 dStateID, const FTresGumiShipStateArgs& rArgs, const bool bForce) {
    return false;
}

bool UTresGumiShipFSM::ChangeState(const int32 dStateID, const bool bForce) {
    return false;
}

UTresGumiShipFSM::UTresGumiShipFSM() {
}

