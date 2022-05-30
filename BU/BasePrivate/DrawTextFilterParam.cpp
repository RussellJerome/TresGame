#include "DrawTextFilterParam.h"

FDrawTextFilterParam::FDrawTextFilterParam() {
    this->m_FilterType = EDrawTextFilterType_Blur;
    this->m_BlurX = 0.00f;
    this->m_BlurY = 0.00f;
    this->m_Strength = 0.00f;
    this->m_Angle = 0.00f;
    this->m_Distance = 0.00f;
}

