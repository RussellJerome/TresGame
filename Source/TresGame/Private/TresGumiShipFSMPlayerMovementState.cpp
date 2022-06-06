#include "TresGumiShipFSMPlayerMovementState.h"

class AActor;

void UTresGumiShipFSMPlayerMovementState::RequestRailSlideInterpoletion() {
}

bool UTresGumiShipFSMPlayerMovementState::IsRailSliding() const {
    return false;
}

AActor* UTresGumiShipFSMPlayerMovementState::GetRailSlideActor() const {
    return NULL;
}

bool UTresGumiShipFSMPlayerMovementState::_IsTrackingRailSliding() const {
    return false;
}

bool UTresGumiShipFSMPlayerMovementState::_IsRouteRailSliding() const {
    return false;
}

UTresGumiShipFSMPlayerMovementState::UTresGumiShipFSMPlayerMovementState() {
}

