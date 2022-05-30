#include "TresAttack4_e_ex356_PressCard.h"

UTresAttack4_e_ex356_PressCard::UTresAttack4_e_ex356_PressCard() {
    this->m_FireProjectileClass = NULL;
    this->m_ThunderProjectileClass = NULL;
    this->m_bIsCardInverse = false;
    this->m_PairCardSpawnTargetDistance = 2000.00f;
    this->m_CardPressOffsetDeltaAngle = 120.00f;
    this->m_CardFollowInitialSpeed = 1200.00f;
    this->m_CardFollowMaxSpeed = 2000.00f;
    this->m_CardFollowAccel = 0.00f;
    this->m_CardPressSpeed = 0.00f;
    this->m_PressSignInitSpeed = 1000.00f;
    this->m_PressSignDeceleration = 4000.00f;
    this->m_CardUpScale = 1.50f;
    this->m_CardChaseAttackOffsetHeight = 500.00f;
    this->m_CardChaseAttackDelayTime = 0.50f;
}

