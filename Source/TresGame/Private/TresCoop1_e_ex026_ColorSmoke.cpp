#include "TresCoop1_e_ex026_ColorSmoke.h"

void UTresCoop1_e_ex026_ColorSmoke::ProgressSpreadStep(const FTresCoopDefinitionParamBP& Param) {
}

bool UTresCoop1_e_ex026_ColorSmoke::IsStartSpread(const FTresCoopDefinitionParamBP& Param) const {
    return false;
}

void UTresCoop1_e_ex026_ColorSmoke::CoopWarpReady(const FTresCoopDefinitionParamBP& Param) {
}

UTresCoop1_e_ex026_ColorSmoke::UTresCoop1_e_ex026_ColorSmoke() {
    this->m_EntryRadius = 0.00f;
    this->m_ForwardOffset = 500.00f;
    this->m_SpaceBetween = 300.00f;
    this->m_QueryTemplateWarp = NULL;
    this->m_QueryShakeOffWarp = NULL;
    this->m_QueryTemplate = NULL;
    this->m_QueryIntervalTime = 0.30f;
}

