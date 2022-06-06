#include "TresPrizeGenComponent.h"

void UTresPrizeGenComponent::BP_SpawnPrize(int32 InIndex, bool InForMagicDraw) {
}

void UTresPrizeGenComponent::BP_SpawnFoodstuffPrize(FName InKeyName, bool InForMagicDraw) {
}

int32 UTresPrizeGenComponent::BP_GetPrizeDataNum() const {
    return 0;
}

bool UTresPrizeGenComponent::BP_CheckMagicAttack(const FTresDamageInfo& InDamageInfo) const {
    return false;
}

UTresPrizeGenComponent::UTresPrizeGenComponent() {
    this->m_PrizeDataAsset = NULL;
    this->m_PrizeLivingTime = 15.00f;
}

