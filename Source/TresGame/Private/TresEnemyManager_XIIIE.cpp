#include "TresEnemyManager_XIIIE.h"

ATresEnemyManager_XIIIE::ATresEnemyManager_XIIIE() {
    this->m_ExtractRule = ETresEnemyXIIIELeaderChangeRule::Alternate;
    this->m_PostAuraEffData = NULL;
    this->m_PostAuraEff = NULL;
    this->m_FirstAnnihilationRule = ETresEnemyXIIIEFirstAnnihilationRule::HpOrTime;
    this->m_BladeTornadoClass = NULL;
    this->m_BladeTornadoForTackleClass = NULL;
    this->m_TornadoEffData = NULL;
    this->m_FirstAnnihilationHitPointPer = 90;
    this->m_FirstAnnihilationStartTime = 20.00f;
    this->m_FirstAnnihilationAttackTime = 5.00f;
    this->m_FirstAnnihilationLightCoefficient = 0.65f;
    this->m_FirstAnnihilationLightChangeStartTime = 1.00f;
    this->m_AnnihilationLightCoefficient = 0.65f;
    this->m_AnnihilationLightChangeStartTime = 1.00f;
    this->m_AnnihilationLightChangeEndTime = 1.00f;
    this->m_AnnihilationBladeTornadoAttackTime = 2.00f;
    this->m_AnnihilationAttackTime = 6.00f;
    this->m_AnnihilationTornadoSpawnTime = 10.00f;
    this->m_AnnihilationReverbeTime = 10.00f;
    this->m_LightCoefficient = 0.50f;
    this->m_LightChangeStartTime = 1.00f;
    this->m_LightChangeEndTime = 1.00f;
    this->m_TornadoEff = NULL;
}

