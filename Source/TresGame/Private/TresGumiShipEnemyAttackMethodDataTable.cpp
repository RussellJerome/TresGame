#include "TresGumiShipEnemyAttackMethodDataTable.h"

FTresGumiShipEnemyAttackMethodDataTable::FTresGumiShipEnemyAttackMethodDataTable() {
    this->m_fAttackMinRange = 0.00f;
    this->m_fAttackMaxRange = 0.00f;
    this->m_fAttackRangeAngle = 0.00f;
    this->m_fAttackingTime = 0.00f;
    this->m_fCoolDownTime = 0.00f;
    this->m_eAttackStateID = ETresGumiShipEnemyStateID::BLANK_STATE;
    this->m_bUsableDefaultValue = false;
}

