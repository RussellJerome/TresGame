#include "TresGimmickCA_SimpleChar.h"

void ATresGimmickCA_SimpleChar::RequestSpawnPrize() {
}


ATresGimmickCA_SimpleChar::ATresGimmickCA_SimpleChar() {
    this->m_prizeKind = ETresDropItemID::ITEM_Crab;
    this->m_prizeSpawnUpDirectionOffset = 1.00f;
    this->m_DisableSpawnPrizeAuto = false;
}

