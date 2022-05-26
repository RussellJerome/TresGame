#include "TresDamageInfo.h"

FTresDamageInfo::FTresDamageInfo() {
    this->m_CommandKind = TRES_CMD_KIND_NONE;
    this->m_ShootFlowKind = TRES_SF_KIND_NONE;
    this->m_DamageKind = TRES_DMG_KIND_NONE;
    this->m_DamageAttribute = ETresDamageAttribute::TRES_DMG_ATTR_PHYSICAL;
    this->m_AttackSrcPower = 0.00f;
    this->m_DamagePowerScale = 0.00f;
    this->m_DamageParabolaAngle = 0.00f;
    this->m_DamageMoveLength = 0.00f;
    this->m_DamageBrakeParam = 0.00f;
    this->m_DamageEffectTime = 0.00f;
    this->m_KnockbackType = ETresAtkHitKnockbackType::TRES_AHKBT_NORMAL;
    this->m_BadStatusKind = ETresBadStatusType::TRES_BADSTAT_NONE;
    this->m_BadStatusEffectTime = 0.00f;
    this->m_BadStatusEffectParam = 0.00f;
    this->m_ReactionPower = 0;
    this->m_ArmorAttackPower = 0;
    this->m_FormPoint = 0;
    this->m_bIsMagicAttack = false;
    this->m_bIsFinishAttack = false;
    this->m_bIsKillerAttack = false;
    this->m_bIsIgnoreGuard = false;
    this->m_bIsRapidFireAttack = false;
    this->m_bIsCriticalHit = false;
    this->m_bIsArmorDamage = false;
    this->m_bIsAerialAttack = false;
    this->m_bIsAttractionDamage = false;
    this->m_bIsCounterAttack = false;
    this->m_bIsJustGuardAttack = false;
    this->m_bIsEnableWeakGuardAttack = false;
    this->m_bIsEnableFullMpBurst = false;
    this->m_bIsEnableMagicDraw = false;
    this->m_bIsEnableNoReactBodyCorrection = false;
    this->m_PhysForceLv = ETresPhysDamageForceLevel::TPDF_LV_1;
}

