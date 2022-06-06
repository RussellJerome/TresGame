#include "TresCommonAssets.h"

UTresCommonAssets::UTresCommonAssets() {
    this->m_ItemDataTable = NULL;
    this->m_EquipItemDataTable = NULL;
    this->m_KeybladeAbilityData = NULL;
    this->m_FoodItemEffectDataTable = NULL;
    this->m_FoodCompleteMealEffectDataTable = NULL;
    this->m_FoodstuffDropDataSet = NULL;
    this->m_TreasureDataSet = NULL;
    this->m_VictoryBonusDataTable = NULL;
    this->m_AbilityDataTable = NULL;
    this->m_UnlockFlagDataTable = NULL;
    this->m_LuckyMarkDataTable = NULL;
    this->m_LuckyMarkMilestoneRewardDataTable = NULL;
    this->m_TresBattlePortalRewardActionData = NULL;
    this->m_CommandData = NULL;
    this->m_ShootFlowData = NULL;
    this->m_StaticSE = NULL;
    this->m_ForceFeedbackSet = NULL;
    this->m_ItemSynthesisDataTableSet = NULL;
    this->m_HologramData = NULL;
    this->m_InitialLoadTags.AddDefaulted(4);
}

