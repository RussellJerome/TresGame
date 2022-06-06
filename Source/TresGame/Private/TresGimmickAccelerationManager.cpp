#include "TresGimmickAccelerationManager.h"

ATresGimmickAccelerationManager::ATresGimmickAccelerationManager() {
    this->m_TickDistance = 0.00f;
    this->m_VisibilityDistance = 0.00f;
    this->m_CollisionDistance = 0.00f;
    this->m_EnableCheckNum = 6;
    this->m_GimmickIndex = 0;
    this->m_TickDistanceSq = 0.00f;
    this->m_VisibilityDistanceSq = 0.00f;
    this->m_CollisionDistanceSq = 0.00f;
}

