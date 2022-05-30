#include "TresEnemyPawn_e_ex360.h"

bool ATresEnemyPawn_e_ex360::IsShowCharacter() {
    return false;
}

bool ATresEnemyPawn_e_ex360::IsKeyBladeRide() {
    return false;
}

ATresEnemyPawn_e_ex360::ATresEnemyPawn_e_ex360() {
    this->m_KBBoard = NULL;
    this->m_KBBoardTailAttackPawnData = NULL;
    this->m_Avatar = NULL;
    this->m_OpacityFadeSpeed = 0.00f;
    this->m_OpacityFadeWaitTime = 0.00f;
    this->m_DarkSplicerAvatarShowTime = 2.00f;
    this->m_StrongDarkSplicerAvatarShowTime = 0.00f;
    this->m_CloneBurstAvatarShowTime = 1.00f;
    this->m_KeyBladeRideMinHigh = 400.00f;
    this->m_pAvaterPawn[0] = NULL;
    this->m_pAvaterPawn[1] = NULL;
    this->m_pAvaterPawn[2] = NULL;
    this->m_pAvaterPawn[3] = NULL;
    this->m_pAvaterPawn[4] = NULL;
    this->m_pAvaterPawn[5] = NULL;
    this->m_pAvaterPawn[6] = NULL;
    this->m_pAvaterPawn[7] = NULL;
    this->m_pAvaterPawn[8] = NULL;
    this->m_pAvaterPawn[9] = NULL;
    this->m_KeybladeBoard = NULL;
    this->m_AttackedChar = NULL;
}

