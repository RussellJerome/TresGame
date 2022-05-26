#include "TresEnemyPawn_e_ex064_Wall.h"
#include "TresSkeletalMeshComponent.h"

ATresEnemyPawn_e_ex064_Wall::ATresEnemyPawn_e_ex064_Wall() {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresEnemyPawn_e_ex064_Wall_SkeltalMesh"));
}

