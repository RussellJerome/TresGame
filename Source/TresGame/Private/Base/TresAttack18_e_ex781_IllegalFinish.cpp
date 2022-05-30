#include "TresAttack18_e_ex781_IllegalFinish.h"

UTresAttack18_e_ex781_IllegalFinish::UTresAttack18_e_ex781_IllegalFinish() {
    this->m_BulletProjectile = NULL;
    this->m_LoopAttackBulletProjectile = NULL;
    this->m_ChaseAttackBulletProjectile = NULL;
    this->m_LoopShotTime = 5.00f;
    this->m_LoopShotIntervalTime = 0.50f;
    this->m_LoopShotLookAheadTime = 0.00f;
    this->m_PatternSwordAttackState = NULL;
    this->m_ChaseAttackTime = 4.00f;
    this->m_ChaseAttackCurve = NULL;
    this->m_FinishAttackWaitTime = 0.40f;
    this->m_FinishEndWaitTime = 1.20f;
    this->m_ProjectileGenerator = NULL;
}

