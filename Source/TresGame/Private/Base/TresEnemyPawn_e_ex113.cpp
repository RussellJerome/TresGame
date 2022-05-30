#include "TresEnemyPawn_e_ex113.h"
#include "TresSkeletalMeshComponent.h"

void ATresEnemyPawn_e_ex113::SpawnChild() {
}

void ATresEnemyPawn_e_ex113::DebugSetCoopNumProjectile(int32 Num) {
}

ATresEnemyPawn_e_ex113::ATresEnemyPawn_e_ex113() {
    this->ThornMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("ThornMesh"));
    this->m_WarpDitherInterpTime = 0.00f;
}

