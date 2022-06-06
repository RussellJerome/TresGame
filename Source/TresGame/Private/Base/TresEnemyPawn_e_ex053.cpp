#include "TresEnemyPawn_e_ex053.h"


int32 ATresEnemyPawn_e_ex053::GetScore() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex053::GetFreezeDieScore() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex053::GetDieScore() const {
    return 0;
}


ATresEnemyPawn_e_ex053::ATresEnemyPawn_e_ex053() {
    this->m_pDiveEffect = NULL;
    this->m_JumpState = NULL;
    this->m_bShoted = false;
    this->m_DieTime = 10.00f;
    this->m_Score = 10;
    this->m_DieScore = 100;
    this->m_FreezeDieScore = 200;
    this->m_JumpPower = 200.00f;
    this->m_JumpGravityScale = 1.00f;
    this->m_bNotifyStop = false;
    this->m_bDiveGround = false;
}

