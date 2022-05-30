#include "TresAttack6_e_he903_IceTornado.h"

UTresAttack6_e_he903_IceTornado::UTresAttack6_e_he903_IceTornado() {
    this->m_ProjectileManager = NULL;
    this->m_Projectile = NULL;
    this->m_fAttackInterval = 0.00f;
    this->m_iMaxAttackCount = 0;
    this->m_fAttackMargin = 0.00f;
    this->m_Bullet = NULL;
    this->m_fBulletSpawnMinDistance = 0.00f;
    this->m_ProjDestroyType = DestroyType_Destroy;
    this->m_EQSQuery = NULL;
    this->m_fBulletSpawnLocVariance = 0.00f;
    this->m_fEQSMaxWaitTime = 0.00f;
    this->m_fBulletInterval = 0.00f;
    this->m_fBulletEvadeOffset = 0.00f;
    this->m_iHomingBulletDenominator = 1;
    this->m_iHomingBulletCountOffset = 1;
    this->bWorldWarpLocation = false;
    this->m_fBlowVelocity = 0.00f;
    this->m_EffDataAsset = NULL;
    this->m_bToMagmaTornado = false;
    this->m_MagmaTornadoDefinition = NULL;
}

