#include "TresEnemyPawn_e_ex311.h"

bool ATresEnemyPawn_e_ex311::IsFinishAttack() {
    return false;
}

ATresEnemyPawn_e_ex311::ATresEnemyPawn_e_ex311() {
    this->m_KBBoard = NULL;
    this->m_KBBoardTailAttackPawnData = NULL;
    this->m_SpawnTailAttackIntervalTime = 0.50f;
    this->m_RollSpeed = 500.00f;
    this->m_RollMax = 50.00f;
    this->m_Avatar = NULL;
    this->m_AfterImageAction = NULL;
    this->m_LightCoefficient = 0.50f;
    this->m_LightChangeStartTime = 1.00f;
    this->m_LightChangeEndTime = 1.00f;
    this->m_PhaseEXOneEndHitPoint = 0;
    this->m_KeybladeBoard = NULL;
    this->m_KBBoardParticle = NULL;
    this->m_KBBoardPopParticle = NULL;
    this->m_AvatarPawn = NULL;
    this->m_AttackedChar = NULL;
}

