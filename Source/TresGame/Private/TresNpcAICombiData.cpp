#include "TresNpcAICombiData.h"

FTresNpcAICombiData::FTresNpcAICombiData() {
    this->m_CombiID = ETresFNpcAICombiID::TRES_FNPC_AI_COMBI_NONE;
    this->m_MainChrUID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_PartnerChrUID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_bUseMP = false;
    this->m_StandbyLimitTime = 0.00f;
    this->m_ExecLength_PtoM = 0.00f;
}

