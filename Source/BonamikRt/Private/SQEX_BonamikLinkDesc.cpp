#include "SQEX_BonamikLinkDesc.h"

FSQEX_BonamikLinkDesc::FSQEX_BonamikLinkDesc() {
    this->m_ParentId = 0;
    this->m_ChildId = 0;
    this->m_LinkType = ESQEX_Bonamik_LinkType_Lateral;
    this->m_IsSelfCollision = false;
    this->m_EnableJointTwist = false;
    this->m_EnableCone = false;
    this->m_EnableConeAnimation = false;
    this->m_LinkStr = 0.00f;
    this->m_LinkParentStr = 0.00f;
    this->m_ConeInnerStr = 0.00f;
    this->m_ConeOuterStr = 0.00f;
    this->m_ConeParentStr = 0.00f;
    this->m_LimitY = 0.00f;
    this->m_LimitZ = 0.00f;
    this->m_ConeOffsetY = 0.00f;
    this->m_ConeOffsetZ = 0.00f;
    this->m_LimitOffsetY = 0.00f;
    this->m_LimitOffsetZ = 0.00f;
    this->m_IsCollisionReceiver = false;
    this->m_IsCollisionRepulsor = false;
    this->m_IsLRA = false;
    this->m_LRAstr = 0.00f;
    this->m_LRAdamping = 0.00f;
    this->m_LinkBatchNo = 0;
    this->m_ConeBatchNo = 0;
    this->m_CollisionBatchNo = 0;
    this->m_PinRadius = 0.00f;
    this->m_PinStr = 0.00f;
    this->m_KdiTrans = 0.00f;
    this->m_KdiRot = 0.00f;
    this->m_ConcaveRatio = 0.00f;
}

