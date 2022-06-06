#include "TresE_dw405NormalComboParam.h"

FTresE_dw405NormalComboParam::FTresE_dw405NormalComboParam() {
    this->AttackPossibleKind = TRES_ENEMY_DW405_ATTACKPOSSIBLE_LAND;
    this->bDisableLastAttackNotifyDisappear = false;
    this->LastAttackPostWaitTime = 0.00f;
    this->bEnableFixedAngle = false;
    this->AppearAngle = 0.00f;
    this->CounterRate = 0.00f;
}

