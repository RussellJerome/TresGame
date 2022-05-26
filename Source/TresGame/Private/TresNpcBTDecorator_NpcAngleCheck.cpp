#include "TresNpcBTDecorator_NpcAngleCheck.h"

UTresNpcBTDecorator_NpcAngleCheck::UTresNpcBTDecorator_NpcAngleCheck() {
    this->m_bUseToSource = false;
    this->m_bAbs = false;
    this->m_Angle = 45.00f;
    this->m_ArithmeticOperation = EArithmeticKeyOperation::Less;
}

