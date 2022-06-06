#include "TresItemWeaponEnhanceDataTable.h"

FTresItemWeaponEnhanceDataTable::FTresItemWeaponEnhanceDataTable() {
    this->m_FlagIndex = 0;
    this->m_WeaponID = ETresItemDefWeapon::WEP_NOEQUIP;
    this->m_bInitAchieved = false;
    this->m_WeaponLevel = 0;
    this->m_AttackPlus = 0;
    this->m_MagicPlus = 0;
    this->m_AppendAbility = ETresAbilityKind::NONE;
}

