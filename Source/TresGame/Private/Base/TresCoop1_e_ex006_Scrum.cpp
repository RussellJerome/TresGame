#include "TresCoop1_e_ex006_Scrum.h"

void UTresCoop1_e_ex006_Scrum::CoopDashStart(const FTresCoopDefinitionParamBP& Param) {
}

void UTresCoop1_e_ex006_Scrum::CoopDashEnd(const FTresCoopDefinitionParamBP& Param) {
}

UTresCoop1_e_ex006_Scrum::UTresCoop1_e_ex006_Scrum() {
    this->m_VerticalNum = 5;
    this->m_VertiacalDeviationOffset = 30.00f;
    this->m_SideDeviationOffset = 30.00f;
    this->m_SideSpaceBetween = 320.00f;
    this->m_VerticalSpaceBetween = 320.00f;
    this->m_DesiredMoveToDistance = 500.00f;
    this->m_ExcludedDistance = 1000.00f;
    this->m_IncludedNum = 3;
    this->m_IncludedDistance = 1300.00f;
    this->m_QueryTemplateWarp = NULL;
    this->m_QueryTemplateScrum = NULL;
    this->m_ForwardOffset = 300.00f;
    this->m_QueryIntervalTime = 0.30f;
    this->m_TackleMoveSpeed = 1800.00f;
    this->m_TurnSpeed = 50.00f;
    this->m_DisableLockOnAngle = 15.00f;
}

