#include "SQEX_SplineMoverExecutor.h"

FSQEX_SplineMoverExecutor::FSQEX_SplineMoverExecutor() {
    this->m_IsReverse = false;
    this->m_IsLoop = false;
    this->m_IsStraightSpline = false;
    this->m_pCurrentSplineActor = NULL;
    this->m_pSplineActorFirst = NULL;
    this->m_pSplineActorLast = NULL;
    this->m_pUnrealSplineComponent = NULL;
    this->m_Speed = 0.00f;
}

