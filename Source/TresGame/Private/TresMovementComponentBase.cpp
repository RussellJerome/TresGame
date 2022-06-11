#include "TresMovementComponentBase.h"

UTresMovementComponentBase::UTresMovementComponentBase() {
    this->CharacterOwner = NULL;
}


void UTresMovementComponentBase::PostPhysicsTickComponent(float DeltaTime, FTresMovementComponentPostPhysicsTickFunction& ThisTickFunction)
{
}

