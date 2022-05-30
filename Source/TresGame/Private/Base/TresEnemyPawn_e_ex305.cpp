#include "TresEnemyPawn_e_ex305.h"

bool ATresEnemyPawn_e_ex305::IsZeroMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsWarpShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsReflectDamageShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsPartnerDead() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsNormalShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsDuringWalkCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsDuringArrowRainCooldown() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsClusterShotMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::IsArrowRainMagazine() {
    return false;
}

bool ATresEnemyPawn_e_ex305::CanUseArrowRain() {
    return false;
}

ATresEnemyPawn_e_ex305::ATresEnemyPawn_e_ex305() {
    this->m_bFlyMode = false;
    this->m_bAura = false;
    this->e_ex313Pawn = NULL;
    this->e_ex316Pawn = NULL;
    this->m_pro_PartnerDead = false;
    this->m_pro_TestPartnerDead = false;
    this->m_pro_BattleTime = 30.00f;
    this->m_pro_BattleEndHitPointPer = 90;
    this->m_pro_ArrowRainSkyEffData = NULL;
    this->m_ArrowRainSkyEff = NULL;
    this->m_pArrowRain = NULL;
    this->m_WarpArmLeft = NULL;
    this->m_WarpArmRight = NULL;
    this->m_pro_MagazineNum = 12;
    this->m_pro_ClusterShotMagazine = 6;
    this->m_pro_ArrowRainMagazine = 12;
    this->m_pro_XIIIAManagerClass = NULL;
    this->m_XIIIAManager = NULL;
}

