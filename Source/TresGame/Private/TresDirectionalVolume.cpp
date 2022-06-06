#include "TresDirectionalVolume.h"

ATresDirectionalVolume::ATresDirectionalVolume() {
    this->m_PlayerOnly = true;
    this->m_Check_ActorDirrection = true;
    this->m_X_Plus = false;
    this->m_X_Minus = false;
    this->m_Y_Plus = false;
    this->m_Y_Minus = false;
    this->m_Z_Plus = false;
    this->m_Z_Minus = false;
}

