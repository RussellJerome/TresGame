#include "TresGumiShipGimmickMagmaPool.h"
#include "TresGumiShipAtkCollisionSetCompo.h"

ATresGumiShipGimmickMagmaPool::ATresGumiShipGimmickMagmaPool() {
    this->m_pAtkComllision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("AtkCollision"));
    this->m_fMagmaTime = 4.00f;
    this->m_fEndMagmaTime = 3.00f;
    this->m_fMinTime = 2.00f;
    this->m_fMaxTime = 4.00f;
    this->m_fAttackStartTime = 2.00f;
}

