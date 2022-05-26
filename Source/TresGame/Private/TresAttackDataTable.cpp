#include "TresAttackDataTable.h"

FTresAttackDataTable::FTresAttackDataTable() {
    this->m_Power = 0.00f;
    this->m_DamageKind = TRES_DMG_KIND_NONE;
    this->m_DamageAttribute = ETresDamageAttribute::TRES_DMG_ATTR_PHYSICAL;
    this->m_DamagePowerScale = 0.00f;
    this->m_DamageParabolaAngle = 0.00f;
    this->m_DamageMoveLength = 0.00f;
    this->m_DamageBrakeParam = 0.00f;
    this->m_KnockbackType = ETresAtkHitKnockbackType::TRES_AHKBT_NORMAL;
    this->m_DamageExecRate = 0.00f;
    this->m_DamageEffectTime = 0.00f;
    this->m_BadStatusKind = ETresBadStatusType::TRES_BADSTAT_NONE;
    this->m_BadStatusGenRate = 0.00f;
    this->m_BadStatusEffectTime = 0.00f;
    this->m_BadStatusEffectParam = 0.00f;
    this->m_TeamCheckType = ETresAtkTeamCheckType::NORMAL;
    this->m_ReactionPowerValue = 0;
    this->m_bIsScrumAttack = false;
    this->m_ArmorAttackPower = 0;
    this->m_FormPoint = 0;
    this->m_bIsMagicAttack = false;
    this->m_bIsIvalidGuard = false;
    this->m_bIsRapidFire = false;
    this->m_bIsKillerAttack = false;
    this->m_bIsAttractionDamage = false;
    this->m_bIsCounterAttack = false;
    this->m_bIsEnableWeakGuardAttack = false;
    this->m_ReflectLevel = 0;
    this->m_ReflectReaction = ETresAtkCollReflectReaction::TRES_ATK_RR_DEFAULT;
    this->m_RevengePoint = 0.00f;
    this->m_PhysForceLv = ETresPhysDamageForceLevel::TPDF_LV_1;
}

