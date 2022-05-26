#include "TresEnemyPawn_e_ex367.h"

bool ATresEnemyPawn_e_ex367::IsXIIIAttackMode() {
    return false;
}

bool ATresEnemyPawn_e_ex367::IsShowCharacter() {
    return false;
}

bool ATresEnemyPawn_e_ex367::IsAvatar() {
    return false;
}

bool ATresEnemyPawn_e_ex367::IsAscensionMode() {
    return false;
}

bool ATresEnemyPawn_e_ex367::InBattleField() {
    return false;
}

void ATresEnemyPawn_e_ex367::BP_ChangeGoatMagicCircle() {
}

ATresEnemyPawn_e_ex367::ATresEnemyPawn_e_ex367() {
    this->m_Avatar = NULL;
    this->m_SwordWaveSocketName = TEXT("ATK_00");
    this->m_WarpEffData = NULL;
    this->m_WarpOutEffData = NULL;
    this->m_WarpParticleEffData = NULL;
    this->m_SwordParticleEffData = NULL;
    this->m_AscensionAttack = NULL;
    this->m_CallXIIIAttack = NULL;
    this->m_XIIIAttack = NULL;
    this->m_BattleeAreaRange = 2500.00f;
    this->m_AscensionObjectData = NULL;
    this->m_pAvaterPawn[0] = NULL;
    this->m_pAvaterPawn[1] = NULL;
    this->m_pAvaterPawn[2] = NULL;
    this->m_pAvaterPawn[3] = NULL;
    this->m_pAvaterPawn[4] = NULL;
    this->m_pAvaterPawn[5] = NULL;
    this->m_pAvaterPawn[6] = NULL;
    this->m_pAvaterPawn[7] = NULL;
    this->m_pAvaterPawn[8] = NULL;
    this->m_pAvaterPawn[9] = NULL;
    this->m_pAvaterPawn[10] = NULL;
    this->m_pAvaterPawn[11] = NULL;
    this->m_pAvaterPawn[12] = NULL;
    this->m_AttackedChar = NULL;
    this->m_SwordParticleEff = NULL;
    this->m_CheckPillarProj = NULL;
    this->m_WarpOutEff = NULL;
    this->m_AscensionObject = NULL;
    this->m_DefaultBehavior = NULL;
}

