#include "TresAttack3_e_ex313_DarkMine.h"

UTresAttack3_e_ex313_DarkMine::UTresAttack3_e_ex313_DarkMine() {
    this->m_DarkMineNum = 5;
    this->m_DarkMineRotYawLimit = 60.00f;
    this->m_DarkMineDist = 500.00f;
    this->m_DarkMineRandomOffsetDist = 150.00f;
    this->m_DarkMineBombDist = 800.00f;
    this->m_DarkMineBombTime = 1.00f;
    this->m_DarkMineBombTime2 = 5.00f;
    this->m_bDestination = false;
    this->m_DarkMineEQSQuery = NULL;
    this->m_RevengeWarpEQSQuery = NULL;
    this->m_DarkMineVoiceID = 0;
}

