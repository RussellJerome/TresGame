#include "TresLevelEntityAppearInfo.h"

FTresLevelEntityAppearInfo::FTresLevelEntityAppearInfo() {
    this->m_AppearMode = ETresLevelEntityAppearMode_Immediate;
    this->m_AppearWaitMin = 0.00f;
    this->m_AppearWaitMax = 0.00f;
    this->m_Visible = false;
    this->m_CoopNo = 0;
}

