#include "TresAnimNode_CollTwoBoneIK.h"

FTresAnimNode_CollTwoBoneIK::FTresAnimNode_CollTwoBoneIK() {
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowStretching = false;
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->m_bMaintainEffectorHitNormal = false;
    this->m_MaintainEffectorLimitRot = 0.00f;
    this->m_MaintainEffectorStartInterpTime = 0.00f;
    this->m_MaintainEffectorEndInterpTime = 0.00f;
    this->CollisionShape = ETresIkCollision::SPHERE;
    this->CheckMin = 0.00f;
    this->CheckMax = 0.00f;
    this->IkOffset = 0.00f;
}

