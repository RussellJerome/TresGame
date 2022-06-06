#include "TresEquipValiableSet.h"

FTresEquipValiableSet::FTresEquipValiableSet() {
    this->m_GrowLevel = ETresWeaponGrowLvl::TRES_WEAPON_GROW_LVL01;
    this->m_OwnerWearForm = ETresCharWearForm::TRES_WEAR_FORM_NORMAL;
    this->m_ReplaceMagicSet = NULL;
    this->m_ReplaceProjectileSet = NULL;
    this->m_UIDataAsset = NULL;
}

