#include "TresAttack3_e_ex301_DarkShooting.h"

UTresAttack3_e_ex301_DarkShooting::UTresAttack3_e_ex301_DarkShooting() {
    this->m_BulletProjectile = NULL;
    this->m_ShotBulletCountMax = 10;
    this->m_ShotBulletIntervalTime = 0.50f;
    this->m_ShotBulletEndWaitTime = 1.50f;
    this->m_ShotBulletLocVariation = 1000.00f;
    this->m_DoWarp = true;
    this->m_LookOnOffsetZ = -1800.00f;
    this->PlayVoiceRate = 0;
}

