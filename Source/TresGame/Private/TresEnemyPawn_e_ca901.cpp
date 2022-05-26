#include "TresEnemyPawn_e_ca901.h"

void ATresEnemyPawn_e_ca901::KillAllTentacle() {
}

bool ATresEnemyPawn_e_ca901::IsDuringWarp() {
    return false;
}

int32 ATresEnemyPawn_e_ca901::GetExistTentacleNum() {
    return 0;
}

void ATresEnemyPawn_e_ca901::BP_DebugAllSpawnTentacle() {
}

ATresEnemyPawn_e_ca901::ATresEnemyPawn_e_ca901() {
    this->m_JointActorAsset = NULL;
    this->m_pJointActor = NULL;
    this->m_ShipMeshActor = NULL;
    this->m_PlayVoiceTime = 7.00f;
    this->m_RestraintJackSuccessSoundData = NULL;
    this->m_RestraintOtherSuccessSoundData = NULL;
}

