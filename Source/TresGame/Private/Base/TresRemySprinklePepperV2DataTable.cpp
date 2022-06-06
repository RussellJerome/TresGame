#include "TresRemySprinklePepperV2DataTable.h"

FTresRemySprinklePepperV2DataTable::FTresRemySprinklePepperV2DataTable() {
    this->EquipmentType = RemySprinklePepperEquipmentType::RemySprinklePepperNone;
    this->ContentsType = RemySprinklePepperContentsType::RemySprinklePepperContentsA;
    this->ValidInputValue = 0.00f;
    this->StickNeutralValue = 0.00f;
    this->GreatSuccessInputBonusCorrectionCoefficient = 0.00f;
    this->InputTimingSuccessPercent = 0.00f;
    this->InputTimingGreatSuccessPercent = 0.00f;
    this->InputTimingTooSlowPercent = 0.00f;
}

