#include "TresEnemyPawn_e_ex731_Base.h"

void ATresEnemyPawn_e_ex731_Base::OnReceiveRemoteEvent(FName inEventName) {
}


bool ATresEnemyPawn_e_ex731_Base::NotifyIceRevengerDamage(float inDamage) {
    return false;
}

bool ATresEnemyPawn_e_ex731_Base::IsNowHiding() {
    return false;
}

int32 ATresEnemyPawn_e_ex731_Base::GetWolfNum() const {
    return 0;
}

ATresEnemyPawn_e_ex731_Base::ATresEnemyPawn_e_ex731_Base() {
    this->m_EffDataAsset = NULL;
}

