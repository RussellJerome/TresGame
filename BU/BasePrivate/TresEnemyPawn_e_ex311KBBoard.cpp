#include "TresEnemyPawn_e_ex311KBBoard.h"

ATresEnemyPawn_e_ex311KBBoard::ATresEnemyPawn_e_ex311KBBoard() {
    this->m_KBBoardPopParticleData = NULL;
    this->m_KBBoardParticleData = NULL;
    this->m_NotChangeDirDistance = 0.00f;
    this->m_Speed = 0.00f;
    this->m_RotSpeed = 0.00f;
    this->m_RotTime = 0.50f;
    this->m_ARoundModeSpeed = 3000.00f;
    this->m_ARoundModeAddSpeed = 0.00f;
    this->m_ARoundModeSpeedMax = 0.00f;
    this->m_PopDistance = 8000.00f;
    this->m_PopAddRise = 70.00f;
    this->m_NotRotTime = 0.30f;
    this->m_FinishOffsetZ = 100.00f;
    this->m_KBFadeOutTime = 0.00f;
    this->m_KBBoardParticle = NULL;
    this->m_KBBoardPopParticle = NULL;
    this->m_MyParent = NULL;
}

