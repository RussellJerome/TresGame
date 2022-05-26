#include "TresTwoBoneLegIKDefinition.h"

FTresTwoBoneLegIKDefinition::FTresTwoBoneLegIKDefinition() {
    this->bUseMayaSolver = false;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowStretching = false;
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->bAllowTwist = false;
    this->bMaintainEffectorHitNormal = false;
    this->MaintainEffectorLimitRotX = 0.00f;
    this->MaintainEffectorLimitRotY = 0.00f;
    this->MaintainEffectorLimitRotZ = 0.00f;
    this->CollisionShape = ETresIkCollision::SPHERE;
    this->CheckMin = 0.00f;
    this->CheckMax = 0.00f;
    this->ShouldMimicOtherLimbWhenNoCollision = false;
    this->LimitTwoBoneIkInternalAngle = 0.00f;
    this->ReturnEffectLocatonIfCollisionNoHit = false;
}

