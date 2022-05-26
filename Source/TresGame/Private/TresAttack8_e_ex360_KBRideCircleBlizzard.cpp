#include "TresAttack8_e_ex360_KBRideCircleBlizzard.h"

UTresAttack8_e_ex360_KBRideCircleBlizzard::UTresAttack8_e_ex360_KBRideCircleBlizzard() {
    this->m_Projectile = NULL;
    this->m_BulletNumMax = 0;
    this->m_shotInterval = 0.00f;
    this->m_BulletShotLoopNumMax = 3;
    this->m_BulletShotLoopInterval = 1.00f;
    this->m_MoveEQSQuery = NULL;
    this->m_ShotWaitTime = 0.50f;
    this->m_MoveSpeedMax = 3000.00f;
    this->m_MoveAddSpeed = 1000.00f;
    this->m_MoveSubSpeed = 3000.00f;
}

