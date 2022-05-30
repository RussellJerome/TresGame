#include "TresAction5_e_ex351_TimeStop.h"

UTresAction5_e_ex351_TimeStop::UTresAction5_e_ex351_TimeStop() {
    this->m_bTimeRushSymbol = false;
    this->m_SlowRateStartTime = 0.00f;
    this->m_SlowRate = 0.01f;
    this->m_LoopTime = 1.00f;
    this->m_StartRecoveryHP = 2.00f;
    this->m_StartRewindTime = 0.50f;
    this->m_StartFadeTime = 1.00f;
    this->m_GravityScale = 1.00f;
    this->m_RecoveryHP = 200;
}

