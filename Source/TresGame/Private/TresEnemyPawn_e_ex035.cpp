#include "TresEnemyPawn_e_ex035.h"

class AActor;



void ATresEnemyPawn_e_ex035::SetDestinationCandidate(TArray<AActor*> inDestinationArray) {
}

bool ATresEnemyPawn_e_ex035::IsOnWall() {
    return false;
}

bool ATresEnemyPawn_e_ex035::IsOnTree() {
    return false;
}

bool ATresEnemyPawn_e_ex035::IsOnCarriage() {
    return false;
}

bool ATresEnemyPawn_e_ex035::IsNutsThrowAppear() {
    return false;
}

bool ATresEnemyPawn_e_ex035::IsCatchMe() const {
    return false;
}

FVector ATresEnemyPawn_e_ex035::GetLookAtLocation_e_ex035(FVector inOriginalLocation) {
    return FVector{};
}

float ATresEnemyPawn_e_ex035::GetLookAtAlpha_e_ex035() {
    return 0.0f;
}

ETresBadStatusType ATresEnemyPawn_e_ex035::GetBadStatus_e_ex035() const {
    return ETresBadStatusType::TRES_BADSTAT_NONE;
}

ATresEnemyPawn_e_ex035::ATresEnemyPawn_e_ex035() {
    this->AttachObject = NULL;
    this->ReserveActorClass = NULL;
    this->m_fGravityScale = 1.00f;
    this->m_BoolArray[0] = 0;
    this->m_BoolArray[1] = 0;
    this->m_BoolArray[2] = 0;
    this->m_BoolArray[3] = 0;
    this->m_BoolArray[4] = 0;
    this->m_BoolArray[5] = 0;
    this->m_BoolArray[6] = 0;
    this->m_BoolArray[7] = 0;
    this->m_BoolArray[8] = 0;
    this->m_BoolArray[9] = 0;
    this->m_bWallMode = false;
    this->m_E_EX011Pawn = NULL;
    this->m_JumpLinkComp = NULL;
}

