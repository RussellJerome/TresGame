#include "TresE_dw405LineComboParam.h"

FTresE_dw405LineComboParam::FTresE_dw405LineComboParam() {
    this->AttackPossibleKind = TRES_ENEMY_DW405_ATTACKPOSSIBLE_LAND;
    this->bDisableLastAttackNotifyDisappear = false;
    this->LastAttackPostWaitTime = 0.00f;
    this->bEnableFixedAngle = false;
    this->AppearAngle = 0.00f;
    this->AppearMaxAngle = 0.00f;
    this->AppearLocationCorrectionRate = 0.00f;
}

