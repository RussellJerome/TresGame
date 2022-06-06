#include "TresMBCurveKeyElement.h"

FTresMBCurveKeyElement::FTresMBCurveKeyElement() {
    this->m_Interpolation = ETresMBCI_Constant;
    this->m_Time = 0.00f;
    this->m_Value = 0.00f;
    this->m_Left = 0.00f;
    this->m_Right = 0.00f;
}

