#include "TresEnemyPawn_e_ex004.h"

void ATresEnemyPawn_e_ex004::SetDebugStateNo(int32 NO) {
}

bool ATresEnemyPawn_e_ex004::IsWaterSummon() {
    return false;
}

int32 ATresEnemyPawn_e_ex004::GetWaterSummonNum() {
    return 0;
}

int32 ATresEnemyPawn_e_ex004::GetWarpCount() {
    return 0;
}

int32 ATresEnemyPawn_e_ex004::GetDebugStateNo() {
    return 0;
}

void ATresEnemyPawn_e_ex004::ForcingCancelWaterSummon() {
}

void ATresEnemyPawn_e_ex004::DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode) {
}

ATresEnemyPawn_e_ex004::ATresEnemyPawn_e_ex004() {
    this->m_bWaterSummon = false;
    this->m_bExternalWaterSummon = false;
    this->m_Appear2_MoveSpeed = 2500.00f;
    this->m_Appear2_MoveDist = 700.00f;
    this->m_Appear2_StopSpeedTime = 0.30f;
    this->m_Appear3_MoveSpeed = 1500.00f;
    this->m_Appear3_MoveDistMin = 400.00f;
    this->m_Appear3_MoveDistMax = 600.00f;
    this->m_Appear3_StopSpeedTime = 0.30f;
    this->m_Appear3_GravityRate = 1.00f;
    this->m_ActionSteam_SteamTime = 5.00f;
    this->m_EffDataAsset = NULL;
}

