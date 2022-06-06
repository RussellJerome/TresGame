#include "TresEnemyPawn_e_ex056.h"

class ASQEX_SplineActor;

void ATresEnemyPawn_e_ex056::SetSplineActor(ASQEX_SplineActor* pActor) {
}


void ATresEnemyPawn_e_ex056::RequestDanger() {
}

void ATresEnemyPawn_e_ex056::NotifyWallHit() {
}

void ATresEnemyPawn_e_ex056::NotifyStop() {
}

bool ATresEnemyPawn_e_ex056::IsForceSelfKill() const {
    return false;
}

void ATresEnemyPawn_e_ex056::ForceSelfKill() {
}

void ATresEnemyPawn_e_ex056::DebugRequestDie(const bool bSelfKill) {
}

ATresEnemyPawn_e_ex056::ATresEnemyPawn_e_ex056() {
    this->m_WallHitEffectGroupID = 3510;
    this->m_bEnableWatermelon = false;
    this->m_Score = 10;
    this->m_bExcellent = false;
    this->m_AppearFadeInTime = 0.30f;
    this->m_SelfKillFadeOutTime = 0.30f;
    this->m_DieFadeOutTime = 0.30f;
    this->m_ExplosionTime = 0.00f;
    this->m_FallGravityScale = 0.00f;
    this->m_bForceSelfKill = false;
    this->m_bSelfKillMode = false;
    this->m_bRunSelfKill = false;
    this->m_SelfKillDistance = 10000.00f;
    this->m_bDangerMode = false;
    this->m_bWallHit = false;
    this->m_MoveSpeed = 1200.00f;
    this->m_FluffyMoveSpeed = 0.10f;
    this->m_FluffyMoveRange = 100.00f;
    this->m_bNotifyStop = false;
    this->m_FadeTime = 0.00f;
    this->m_FadeElapsedTime = 0.00f;
    this->m_bDoFadeIn = false;
    this->m_bDoFadeOut = false;
    this->m_bExplisionAttack = false;
}

