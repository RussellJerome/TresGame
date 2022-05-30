#include "TresEnemyPawn_e_ex010.h"

void ATresEnemyPawn_e_ex010::SetAppearModeAndState(TEnumAsByte<ETresLevelEntityAppearMode> AppearMode) {
}

bool ATresEnemyPawn_e_ex010::IsCoopMode() const {
    return false;
}


ATresEnemyPawn_e_ex010::ATresEnemyPawn_e_ex010() {
    this->m_bRailSlidePawn = false;
    this->m_PartnerPawn = NULL;
}

