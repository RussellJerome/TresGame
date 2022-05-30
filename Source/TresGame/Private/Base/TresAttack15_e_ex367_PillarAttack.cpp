#include "TresAttack15_e_ex367_PillarAttack.h"

UTresAttack15_e_ex367_PillarAttack::UTresAttack15_e_ex367_PillarAttack() {
    this->m_IsWarpParam = false;
    this->m_ShotWaitTimeParam = 0.00f;
    this->m_ShotAfterTimeParam = 0.00f;
    this->m_ShotCountParam = 0;
    this->m_ShotIntervalTImeParam = 0.00f;
    this->m_ShotBulletIntervalTImeParam = 0.00f;
    this->m_AttackEffctData = NULL;
    this->m_VoiceSocketName = TEXT("center");
    this->PlayVoiceRate = 100;
    this->m_PillarAtkAfterHigh = 100.00f;
}

