#include "TresAIEventBattlePoint.h"

void ATresAIEventBattlePoint::SetPhaseTag(const FGameplayTag& InTag) {
}

bool ATresAIEventBattlePoint::IsPhaseTag(const FGameplayTag& InTag) const {
    return false;
}

ATresAIEventBattlePoint::ATresAIEventBattlePoint() {
    this->m_UseBattlePlayerEmotionManager = false;
}

