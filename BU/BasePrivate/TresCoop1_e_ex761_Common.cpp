#include "TresCoop1_e_ex761_Common.h"

void UTresCoop1_e_ex761_Common::OnLeaderAttackHit(const FTresCoopDefinitionParamBP& Param) {
}

bool UTresCoop1_e_ex761_Common::IsLeaderAttackHit(const FTresCoopDefinitionParamBP& Param) {
    return false;
}

UTresCoop1_e_ex761_Common::UTresCoop1_e_ex761_Common() {
    this->m_bIsIgnoreTargetNonePawn = false;
    this->m_bIsIgnoreAttackPawn = false;
    this->m_bIsIgnoreDamageReactionPawn = false;
    this->m_bEnableDamageOnAbort = false;
}

