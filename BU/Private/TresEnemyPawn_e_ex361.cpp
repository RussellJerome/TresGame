#include "TresEnemyPawn_e_ex361.h"

void ATresEnemyPawn_e_ex361::OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID) {
}

void ATresEnemyPawn_e_ex361::OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID) {
}

bool ATresEnemyPawn_e_ex361::IsThunderGenerator() {
    return false;
}

bool ATresEnemyPawn_e_ex361::IsHitCounterAttack() {
    return false;
}

bool ATresEnemyPawn_e_ex361::IsCounterSuccess() {
    return false;
}

float ATresEnemyPawn_e_ex361::GetWarpAngle() {
    return 0.0f;
}

void ATresEnemyPawn_e_ex361::BP_FinishDarkAura() {
}

void ATresEnemyPawn_e_ex361::BP_EndMasterLight() {
}

ATresEnemyPawn_e_ex361::ATresEnemyPawn_e_ex361() {
    this->m_bAura = false;
    this->m_pro_DarkMineGeneratorClass = NULL;
    this->m_pro_DarkHand_ThunderGeneratorClass = NULL;
    this->m_pro_bTestDeleteThunder = true;
    this->m_DarkMineManager = NULL;
    this->m_pro_KabutowariDecalEffData = NULL;
    this->m_KabutowariDecalEff = NULL;
}

