#include "TresPlayerStart.h"

ATresPlayerStart::ATresPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->m_AutoDispMapName = true;
    this->m_Enabled = true;
    this->m_IsAutoSave = false;
    this->m_IsEnableNavMap = false;
    this->m_SwitchNavMapTime = 1.50f;
}

