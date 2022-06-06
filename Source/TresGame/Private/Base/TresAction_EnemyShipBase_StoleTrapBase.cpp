#include "TresAction_EnemyShipBase_StoleTrapBase.h"

UTresAction_EnemyShipBase_StoleTrapBase::UTresAction_EnemyShipBase_StoleTrapBase() {
    this->m_StartEffect = NULL;
    this->m_PointEffect = NULL;
    this->m_DelayTime = 1.00f;
    this->m_Height = 24000.00f;
    this->m_ProjectileSpawnTime = 0.50f;
    this->m_ProjectileSeedTimeLimit = 3.00f;
    this->m_ProjectileEffectEndTime = 0.50f;
    this->m_AttackSeedName = TEXT("StoleTrapSeed");
    this->m_SocketNameRight = TEXT("StoleTrap_01_skt");
    this->m_SocketNameLeft = TEXT("StoleTrap_02_skt");
}

