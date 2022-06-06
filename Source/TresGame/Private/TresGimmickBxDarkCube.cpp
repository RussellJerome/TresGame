#include "TresGimmickBxDarkCube.h"
#include "TresSpawnActorManagerComponent.h"

void ATresGimmickBxDarkCube::SetEnableAttack(bool bEnable, const FName InGroupName, float InAttackInterval) {
}

void ATresGimmickBxDarkCube::SetBallSize(float fBallSize) {
}

void ATresGimmickBxDarkCube::SetAttackTeamNo(int32 InTeamNo) {
}

void ATresGimmickBxDarkCube::NotifyChangeGimmickPause(bool bPause) {
}

bool ATresGimmickBxDarkCube::DarkcubeCanbeMovable() const {
    return false;
}


FRotator ATresGimmickBxDarkCube::CalcMovementToRot(FRotator BaseRotator, FVector vel, float fRadius) {
    return FRotator{};
}

ATresGimmickBxDarkCube::ATresGimmickBxDarkCube() {
    this->m_CheckSpawnPoint = false;
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
}

