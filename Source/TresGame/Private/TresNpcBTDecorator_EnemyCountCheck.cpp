#include "TresNpcBTDecorator_EnemyCountCheck.h"

UTresNpcBTDecorator_EnemyCountCheck::UTresNpcBTDecorator_EnemyCountCheck() {
    this->m_Radius = 300.00f;
    this->m_EnemyNum = 0;
    this->m_ArithmeticOperation = EArithmeticKeyOperation::GreaterOrEqual;
    this->m_bEnableLockon = false;
}

