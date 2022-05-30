#include "TresProjectile_e_ex361_DarkMine.h"

ATresProjectile_e_ex361_DarkMine::ATresProjectile_e_ex361_DarkMine() {
    this->m_DarkMineBootEff = NULL;
    this->m_DarkMineBombDist = 500.00f;
    this->m_DarkMineBombTime = 0.80f;
    this->m_DarkMineBombTime2 = 10.00f;
    this->m_DarkMineBombOmenTime2 = 0.80f;
    this->m_bIsExplosion = false;
    this->m_pro_DarkMineBootEffData = NULL;
    this->m_AtkUpdateInterval = 1.00f;
}

