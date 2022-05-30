#include "TresAction3_e_ex354_Warp.h"

UTresAction3_e_ex354_Warp::UTresAction3_e_ex354_Warp() {
    this->m_bForRevenge = false;
    this->m_AvailableFieldID = EEX354_FieldID_Standard;
    this->m_WarpType = EEX354_WarpType_Default;
    this->m_WarpPosType = EEX354_WarpPosType_Land;
    this->m_bDisableLockon = false;
    this->m_fYawOffset = 0.00f;
    this->m_ActionEQSQuery = NULL;
}

