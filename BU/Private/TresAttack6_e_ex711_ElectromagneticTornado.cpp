#include "TresAttack6_e_ex711_ElectromagneticTornado.h"

UTresAttack6_e_ex711_ElectromagneticTornado::UTresAttack6_e_ex711_ElectromagneticTornado() {
    this->m_pro_InitMoveSpeed = 0.00f;
    this->m_pro_MaxMoveSpeed = 3000.00f;
    this->m_pro_AddMoveSpeed = 3000.00f;
    this->m_pro_SubMoveSpeed = 3000.00f;
    this->m_pro_MoveTurnSpeed = 30.00f;
    this->m_pro_MoveTurnDist = 1000.00f;
    this->m_pro_ChgCollDist = 1000.00f;
    this->m_pro_ShakeSpeed = 1000.00f;
    this->m_pro_ShakeTime = 1.00f;
    this->m_pro_MoveHeight = 300.00f;
    this->m_pro_RushCnt = 5;
    this->m_pro_NextMoveWaitTime = 2.00f;
    this->m_pro_NextMoveWaitShakeSpeed = 1000.00f;
    this->m_pro_NextMoveWaitTime2 = 2.00f;
    this->m_pro_NextMoveWaitShakeSpeed2 = 3000.00f;
    this->m_pro_OverRunDist = 2000.00f;
    this->m_pro_OutMoveTime = 2.00f;
    this->m_pro_OutMoveFinishTime = 1.50f;
    this->m_pro_CenterMoveMinSpeed = 3000.00f;
    this->m_pro_CenterMoveCurve = NULL;
    this->m_pro_CenterStraightMoveSpeedMin = 200.00f;
    this->m_pro_CenterStraightMoveSpeedMax = 1500.00f;
    this->m_pro_CenterStraightMoveCurve = NULL;
}

