#include "TresEnemyPawn_e_ex105.h"

ATresEnemyPawn_e_ex105::ATresEnemyPawn_e_ex105() {
    this->m_pCubeJoint = NULL;
    this->m_pChaosShotCubeJoint = NULL;
    this->m_pRanbuCubeJoint = NULL;
    this->m_pro_DamageCubeScale = 0.50f;
    this->m_pro_DamageCubeScaleTime = 0.20f;
    this->m_NoHitEffData = NULL;
    this->m_bNoHit = false;
}

