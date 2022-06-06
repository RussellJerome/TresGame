#include "TresAction7_e_ex355_Warp.h"

UTresAction7_e_ex355_Warp::UTresAction7_e_ex355_Warp() {
    this->m_WarpType = EWarpType_e_ex355_Appear;
    this->m_fWarpTime = 0.00f;
    this->m_fWarpTime_Appear = 0.00f;
    this->m_bNoWaitAppearWhenBerserkGageZero = false;
    this->m_bDisableLockonOnDisappear = false;
    this->m_bMove = false;
    this->m_EQSQuery = NULL;
    this->m_bForRevenge = false;
}

