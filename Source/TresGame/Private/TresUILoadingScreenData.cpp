#include "TresUILoadingScreenData.h"

FTresUILoadingScreenData::FTresUILoadingScreenData() {
    this->WorldCode = TRES_WCID_EX;
    this->NeedCmpType = ETresUIValueCompareType::GreaterEq;
    this->DisableCmpType = ETresUIValueCompareType::GreaterEq;
    this->LotValue = 0;
    this->ForceAtSuccess = false;
    this->Version = ETresUIDataVersion::None;
}

