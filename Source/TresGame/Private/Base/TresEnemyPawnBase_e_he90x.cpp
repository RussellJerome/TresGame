#include "TresEnemyPawnBase_e_he90x.h"
#include "TresSkeletalMeshComponent.h"

void ATresEnemyPawnBase_e_he90x::OnReceiveRemoteEvent(FName inEventName) {
}


bool ATresEnemyPawnBase_e_he90x::IsTargetOnMountain() {
    return false;
}

bool ATresEnemyPawnBase_e_he90x::IsPlayerOnMountain() {
    return false;
}

ATresEnemyPawnBase_e_he90x::ATresEnemyPawnBase_e_he90x() {
    this->m_bDebugDispCollMesh = false;
    this->m_bForceStrongBodyDamage = false;
    this->m_fMaxTargetMountOffTime = 0.00f;
    this->MyCollMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCollMesh0"));
    this->m_Player = NULL;
}

