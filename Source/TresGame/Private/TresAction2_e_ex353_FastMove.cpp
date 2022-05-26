#include "TresAction2_e_ex353_FastMove.h"

UTresAction2_e_ex353_FastMove::UTresAction2_e_ex353_FastMove() {
    this->m_FastMoveType = ETresEnemyEx353FastMoveType::Speed;
    this->m_MoveSpeed = 3000.00f;
    this->m_MoveTime = 0.30f;
    this->m_DestinationDist = 300.00f;
    this->m_FastMoveTime = 5.00f;
    this->m_MoveRadiusRate = 0.25f;
    this->m_MoveAnglePitch = 10.00f;
    this->m_MoveNotCancelAbsTime = 0.50f;
    this->m_MoveCurveData = NULL;
}

