#include "TresAction6_e_ex711_RollMove.h"

UTresAction6_e_ex711_RollMove::UTresAction6_e_ex711_RollMove() {
    this->m_bCameraIn = true;
    this->m_pro_MoveMaxSpeed = 800.00f;
    this->m_pro_TurnSpeed = 360.00f;
    this->m_pro_MoveHeight = 300.00f;
    this->m_pro_TgtDist = 2000.00f;
    this->m_pro_TgtMoveAngle = 45.00f;
    this->m_pro_JumpHeight = 3000.00f;
    this->m_pro_MoveTime = 1.50f;
    this->m_pro_StMoveCurve = NULL;
    this->m_pro_EndMoveCurve = NULL;
}

