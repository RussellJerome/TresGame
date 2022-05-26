#include "TresUIP_HudRightTimer.h"

UTresUIP_HudRightTimer::UTresUIP_HudRightTimer() {
    this->m_TimerTask = NULL;
    this->m_CounterAnimation = NULL;
    this->m_CounterColorAnimation = NULL;
    this->m_CounterMin = NULL;
    this->m_CounterSec = NULL;
    this->m_CounterMilliSec = NULL;
    this->m_CounterRec = NULL;
    this->m_RecordMin = NULL;
    this->m_RecordSec = NULL;
    this->m_RecordMilliSec = NULL;
    this->m_NewRecordAnimation = NULL;
    this->m_Title = NULL;
    this->m_TitleText = NULL;
    this->m_RslTimer = NULL;
}

