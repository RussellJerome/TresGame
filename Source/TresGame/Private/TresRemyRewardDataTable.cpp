#include "TresRemyRewardDataTable.h"

FTresRemyRewardDataTable::FTresRemyRewardDataTable() {
    this->CookingSuccessPoints = 0;
    this->CookingGreatSuccessPoints = 0;
    this->Milestone1Reward = ETresItemDefAccessory::NOTHING;
    this->Milestone2Reward = ETresItemDefBattleItem::NOTHING;
    this->CircumductionNum = 0;
    this->CircumductionReward = ETresItemDefFoodstuff::NOTHING;
    this->CookingFailedReward = ETresItemDefFood::NOTHING;
    this->SpecialFoodStuffRecipeType = RemyRecipeType::NOTHING;
}

