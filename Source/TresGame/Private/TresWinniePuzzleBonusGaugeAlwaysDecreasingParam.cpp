#include "TresWinniePuzzleBonusGaugeAlwaysDecreasingParam.h"

FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam::FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam() {
    this->IsEnable = false;
    this->DecreasingBaseSpeed = 0.00f;
    this->DecreasingSpeedChangeCurve = NULL;
    this->DecreasingBaseSpeedOnSecond = 0.00f;
    this->DecreasingSpeedChangeCurveOnSecond = NULL;
}

