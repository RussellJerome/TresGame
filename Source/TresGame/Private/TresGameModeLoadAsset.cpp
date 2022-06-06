#include "TresGameModeLoadAsset.h"
#include "TresAICoordinator.h"

UTresGameModeLoadAsset::UTresGameModeLoadAsset() {
    this->m_HpPrizeS = NULL;
    this->m_HpPrizeL = NULL;
    this->m_MpPrizeS = NULL;
    this->m_MpPrizeL = NULL;
    this->m_MunnyPrizeS = NULL;
    this->m_MunnyPrizeM = NULL;
    this->m_MunnyPrizeL = NULL;
    this->m_FocusPrizeS = NULL;
    this->m_FocusPrizeL = NULL;
    this->m_CrabPrize = NULL;
    this->m_MovableCrabPrize = NULL;
    this->m_LightPrizeS = NULL;
    this->m_LightPrizeL = NULL;
    this->m_HealPrizeBox = NULL;
    this->m_MatePrizeBox = NULL;
    this->m_FstfPrizeBox = NULL;
    this->m_RarePrizeBox = NULL;
    this->EnemyCommonParam = NULL;
    this->m_EnemyBaseStatusListData = NULL;
    this->m_EnemyShipBaseStatusListData = NULL;
    this->m_FriendDamageCommonParam = NULL;
    this->m_FriendData = NULL;
    this->m_PlayerDamageCommonParam = NULL;
    this->m_MognetMedalClass = NULL;
    this->m_CmnCriticalHitEffect = NULL;
    this->m_CmnGuardReflectEffect = NULL;
    this->m_CmnStaggerReflectEffect = NULL;
    this->m_CmnInvincibleHitEffect = NULL;
    this->m_CmnArmorHitEffect = NULL;
    this->m_CmnIgnoreGuardHitEffect = NULL;
    this->m_CmnPlayerDeadEffectEad = NULL;
    this->m_CmnGameOverHeartEffect = NULL;
    this->m_CmnGameOverLightEffect = NULL;
    this->m_CmnMissionFailedLightEffect = NULL;
    this->m_GameOverKHSBP = NULL;
    this->m_GameOverKHS = NULL;
    this->m_CmnPhysMatEffect = NULL;
    this->m_CmnSnowTailAsset = NULL;
    this->m_AICoordinatorClass_Beginner = ATresAICoordinator::StaticClass();
    this->m_AICoordinatorClass_Standard = ATresAICoordinator::StaticClass();
    this->m_AICoordinatorClass_Proud = ATresAICoordinator::StaticClass();
    this->m_AICoordinatorClass_Critical = ATresAICoordinator::StaticClass();
    this->m_BadStatCloudClass = NULL;
    this->m_BadStatDischargeClass = NULL;
    this->m_BadStatSneezeClass = NULL;
    this->m_BadStatHoneyClass = NULL;
    this->m_PhysDamageTypeClass[0] = NULL;
    this->m_PhysDamageTypeClass[1] = NULL;
    this->m_PhysDamageTypeClass[2] = NULL;
    this->m_PhysDamageTypeClass[3] = NULL;
    this->m_remyRecipeData = NULL;
    this->m_finalMilestoneReward = ETresItemDefWeapon::WEP_NOEQUIP;
}

