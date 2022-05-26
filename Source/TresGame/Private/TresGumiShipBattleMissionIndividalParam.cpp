#include "TresGumiShipBattleMissionIndividalParam.h"

FTresGumiShipBattleMissionIndividalParam::FTresGumiShipBattleMissionIndividalParam() {
    this->m_eBattleType = ETresGumiShipBattleMissionType::BMT_DEFEAT_TARGET;
    this->m_udScoreOfRanks[0] = 0;
    this->m_udScoreOfRanks[1] = 0;
    this->m_udScoreOfRanks[2] = 0;
    this->m_udScoreOfRanks[3] = 0;
    this->m_udScoreOfRanks[4] = 0;
    this->m_dTimeBonus[0] = 0;
    this->m_dTimeBonus[1] = 0;
    this->m_dTimeBonus[2] = 0;
    this->m_dTimeBonus[3] = 0;
    this->m_dTimeBonus[4] = 0;
    this->m_dTimeBonus[5] = 0;
    this->m_dTimeBonus[6] = 0;
    this->m_dTimeBonus[7] = 0;
    this->m_udTimeLimitSeconds = 0;
    this->m_udNumbetOfDefeated = 0;
}

