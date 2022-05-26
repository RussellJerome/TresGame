#include "TresSkeletalFootStepUnit.h"

FTresSkeletalFootStepUnit::FTresSkeletalFootStepUnit() {
    this->m_BoneIndex = 0;
    this->m_ShapeType = ETresIkCollision::SPHERE;
    this->m_TouchedCheckDist = 0.00f;
    this->m_FootStepSet = NULL;
    this->m_FootStampDir = ETresSkeletalFootStampDir::Normal;
    this->m_StampCheckDist = 0.00f;
}

