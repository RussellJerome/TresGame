#include "TresEnemyPawn_e_ex304.h"

void ATresEnemyPawn_e_ex304::SetEnableDebugFnishBlow(bool bEnable) {
}

bool ATresEnemyPawn_e_ex304::IsSaixBodyTypeBlueBurst() {
    return false;
}

bool ATresEnemyPawn_e_ex304::IsHitAerialComboAttack() {
    return false;
}

bool ATresEnemyPawn_e_ex304::IsDuringLeaderChangeOrFatalAttackCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex304::IsDuringFatalAttackCooldownWithPlayerHeightCheck() {
    return false;
}

bool ATresEnemyPawn_e_ex304::IsDebugFnishBlow() {
    return false;
}

void ATresEnemyPawn_e_ex304::BP_EndHandCharging() {
}

ATresEnemyPawn_e_ex304::ATresEnemyPawn_e_ex304() {
    this->m_BattleEndHitPointPerAreaD = 30;
}

