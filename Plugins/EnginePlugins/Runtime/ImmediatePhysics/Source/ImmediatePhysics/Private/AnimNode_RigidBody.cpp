#include "AnimNode_RigidBody.h"

FAnimNode_RigidBody::FAnimNode_RigidBody() {
    this->OverridePhysicsAsset = NULL;
    this->OverlapChannel = ECC_WorldStatic;
    this->bEnableWorldGeometry = false;
    this->bComponentSpaceSimulation = false;
    this->bOverrideWorldGravity = false;
    this->CachedBoundsScale = 0.00f;
}

