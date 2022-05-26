#include "TresEquipmentComponent.h"

UTresEquipmentComponent::UTresEquipmentComponent() {
    this->m_AttachPawn = NULL;
    this->m_AttachSkin = NULL;
    this->MyWeaponSet = NULL;
    this->m_bIsFixedEquip = false;
    this->m_WearformSet = NULL;
    this->m_FormAbilityAsset = NULL;
    this->m_MagicSet = NULL;
    this->m_ProjectileSet = NULL;
    this->m_CmnFormChangeChargeEffect = NULL;
    this->m_ReplaceMagicSet = NULL;
    this->m_ReplaceProjectileSet = NULL;
    this->m_pBaseParam = NULL;
}

