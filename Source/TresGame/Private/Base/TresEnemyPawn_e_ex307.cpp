#include "TresEnemyPawn_e_ex307.h"

void ATresEnemyPawn_e_ex307::SpawnCards() {
}

bool ATresEnemyPawn_e_ex307::IsCardVanishMode() const {
    return false;
}

void ATresEnemyPawn_e_ex307::DebugSetEnableDrawCardType(int32 bEnable) {
}

ATresEnemyPawn_e_ex307::ATresEnemyPawn_e_ex307() {
    this->m_StunActionClass = NULL;
    this->m_CardManagerClass = NULL;
    this->m_bEnableCorrectCardVoice2D = true;
    this->m_bEnableIncorrectCardVoice2D = true;
    this->m_IncorrectCardVoicePlayRate = 1.00f;
    this->m_StunLimitTime = 0.00f;
    this->m_StunLimitHitPointRate = 0.00f;
    this->m_SmokeParticleSystem = NULL;
    this->m_CardManager = NULL;
}

