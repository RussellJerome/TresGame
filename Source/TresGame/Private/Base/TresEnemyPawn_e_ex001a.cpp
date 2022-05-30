#include "TresEnemyPawn_e_ex001a.h"

ATresEnemyPawn_e_ex001a::ATresEnemyPawn_e_ex001a() {
    this->m_SpawnPointEQSQuery = NULL;
    this->m_MaxSpawnDistance = 1500.00f;
    this->m_MinSpawnDistance = 1000.00f;
    this->m_WarpInEffect = NULL;
    this->m_WarpOutEffect = NULL;
    this->m_KairiPieceEffect = NULL;
    this->m_KairiPieceEffect_ShadowMove = NULL;
    this->m_KairiPieceEffectComp = NULL;
}

