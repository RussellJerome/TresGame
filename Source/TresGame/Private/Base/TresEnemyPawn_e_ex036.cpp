#include "TresEnemyPawn_e_ex036.h"

bool ATresEnemyPawn_e_ex036::IsMagicSquare() {
    return false;
}

bool ATresEnemyPawn_e_ex036::IsFinMoveUp() const {
    return false;
}

void ATresEnemyPawn_e_ex036::Debug_ForcingCancelMagicSquare() {
}

ATresEnemyPawn_e_ex036::ATresEnemyPawn_e_ex036() {
    this->m_bMagicSquare = false;
    this->m_pro_WaterBallManagerClass = NULL;
    this->m_WaterBallManager = NULL;
}

