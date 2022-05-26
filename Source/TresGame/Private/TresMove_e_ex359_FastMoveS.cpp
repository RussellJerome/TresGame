#include "TresMove_e_ex359_FastMoveS.h"

UTresMove_e_ex359_FastMoveS::UTresMove_e_ex359_FastMoveS() {
    this->m_fWarpDisappearTime = 0.00f;
    this->m_fMaxMoveTime = 0.00f;
    this->m_VelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fVelocityExp = 1.00f;
    this->m_fWaveWidth = 500.00f;
    this->m_fTangentSize = 0.00f;
    this->m_bReverse = false;
    this->m_bDebugDsip = false;
}

