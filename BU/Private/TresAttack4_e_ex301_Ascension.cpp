#include "TresAttack4_e_ex301_Ascension.h"

UTresAttack4_e_ex301_Ascension::UTresAttack4_e_ex301_Ascension() {
    this->m_AscensionTypeParam = TRES_ATTACK4_ENEMY_EX301_ASCENSION1;
    this->m_AscensionModeOff = false;
    this->m_ActionTime = 0.00f;
    this->m_LightSpeed = 1.00f;
    this->m_WarpTimer = 0.20f;
    this->m_LightWaitTimer = 0.00f;
    this->m_BulletProjectile = NULL;
    this->m_PillarPopTime = 0.20f;
    this->m_PillarPopEndTime = 1.80f;
    this->m_PillarMoveTime = 5.00f;
    this->m_PillarEndWaitTime = 4.00f;
    this->m_PillarOffset = 0.00f;
    this->m_PillarRotOffset = 0.01f;
    this->m_PillarDist = 690.00f;
    this->m_SoraInitSetPos = 900.00f;
    this->m_FriendInitSetPos = 1000.00f;
    this->m_SoraInitSetRot = 90.00f;
    this->m_FriendInitSetRot = 30.00f;
    this->m_PillarAtk3P1DistanceSpeed = 800.00f;
    this->m_PillarAtk3P3WaitTime = 0.30f;
    this->m_WeponDenableWaitTime = 0.40f;
    this->m_PillarAtkMotBlendFrame = 5.00f;
    this->PlayVoiceRate = 0;
    this->m_PillarAtkAfterHigh = 900.00f;
}

