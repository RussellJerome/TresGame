#include "TresGameOverHintData.h"

FTresGameOverHintData::FTresGameOverHintData() {
    this->HintType = EGameOverHintType::CommonHint;
    this->Priority = 0;
    this->WorldCode = TRES_WCID_EX;
    this->SpecialType = ETresGameOverHintSpecialType::None;
    this->Version = ETresUIDataVersion::None;
}

