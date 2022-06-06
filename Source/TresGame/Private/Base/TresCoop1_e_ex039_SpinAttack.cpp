#include "TresCoop1_e_ex039_SpinAttack.h"

bool UTresCoop1_e_ex039_SpinAttack::IsAttackLoop(const FTresCoopDefinitionParamBP& Param) const {
    return false;
}

void UTresCoop1_e_ex039_SpinAttack::CoopMemberAttackStart(const FTresCoopDefinitionParamBP& Param) {
}

UTresCoop1_e_ex039_SpinAttack::UTresCoop1_e_ex039_SpinAttack() {
    this->m_MinRadius = 0.00f;
    this->m_MaxRadius = 0.00f;
    this->m_LoopTime = 0.00f;
    this->m_ReverseTime = 0.00f;
    this->m_TurnSpeed = 0.00f;
    this->m_EnvQuery = NULL;
    this->m_QueryIntervalTime = 0.00f;
    this->m_EndEnvQuery = NULL;
}

