#include "TresEnemyPawn_e_ex781_TetraBitManager.h"

ATresEnemyPawn_e_ex781_TetraBitManager::ATresEnemyPawn_e_ex781_TetraBitManager() {
    this->m_TetraBitClass = NULL;
    this->m_TriangleParticleData = NULL;
    this->m_RiseParticleData = NULL;
    this->m_ShotParticleData = NULL;
    this->m_FormationOffsetZ = 200.00f;
    this->m_FormationMoveSpeed = 500.00f;
    this->m_FormationMoveSubSpeed = 50.00f;
    this->m_FormationDist = 100.00f;
    this->m_FormationDeg = 50.00f;
    this->m_NormalMoveSpeed = 2000.00f;
    this->m_NormalMoveSubSpeed = 200.00f;
    this->m_TriangleOffsetZ = 50.00f;
    this->m_ShotOffsetZ = 0.00f;
    this->mRiseEffectCheckHight = 400.00f;
    this->mBodyColScaleSpeed = 10.00f;
    this->mBodyColOffsetUseHigh = 0.00f;
    this->mBodyColOffsetZ = -50.00f;
    this->m_MyTarget = NULL;
    this->m_TriangleParticle = NULL;
    this->m_ShotParticle = NULL;
}

