#include "BX901_RailSlideProjectileInfo.h"

FBX901_RailSlideProjectileInfo::FBX901_RailSlideProjectileInfo() {
    this->m_bRailSlide = false;
    this->m_fWaitTime = 0.00f;
    this->m_fVelocity = 0.00f;
    this->m_bRelativeVelocityToOwner = false;
    this->m_bOwnerAsInitOffsetAxis = false;
    this->m_bHoming = false;
    this->m_bTargetAsHomingAxis = false;
    this->m_fMinHomingDistance = 0.00f;
    this->m_fHomingAccel = 0.00f;
    this->m_fMaxHomingVelocity = 0.00f;
    this->m_fMinHomingDistance_Reflect = 0.00f;
    this->m_fHomingAccel_Reflect = 0.00f;
    this->m_fMaxHomingVelocity_Reflect = 0.00f;
    this->m_bBoolArray[0] = 0;
    this->m_bBoolArray[1] = 0;
    this->m_bBoolArray[2] = 0;
    this->m_bBoolArray[3] = 0;
    this->m_bBoolArray[4] = 0;
    this->m_bBoolArray[5] = 0;
    this->m_bBoolArray[6] = 0;
    this->m_bBoolArray[7] = 0;
    this->m_bBoolArray[8] = 0;
    this->m_bBoolArray[9] = 0;
}

