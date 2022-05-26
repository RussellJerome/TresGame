#include "TresProjectile_e_ex361_DarkHand_ShockWave.h"

ATresProjectile_e_ex361_DarkHand_ShockWave::ATresProjectile_e_ex361_DarkHand_ShockWave() {
    this->m_pro_ShockWaveEffData = NULL;
    this->m_AkkColLifeTime = 0.60f;
    this->m_AkkColFinLifeTime = 1.00f;
    this->m_SpawnAkkDist = 80.00f;
    this->m_AtkUpdateInterval = 0.45f;
    this->m_bIsCenterDistShutdown = true;
    this->m_CenterDistShutdown = 2000.00f;
}

