#include "TresEnemyPawn_e_ex064.h"
#include "TresSkeletalMeshComponent.h"

bool ATresEnemyPawn_e_ex064::RequestWallPartsRespawn(float waitRespawnTime) {
    return false;
}

int32 ATresEnemyPawn_e_ex064::GetShipHP() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex064::GetCurrentWallPartsNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex064::GetCurrentWallPartsMaxNum() const {
    return 0;
}

void ATresEnemyPawn_e_ex064::AddShipHP(int32 Value) {
}

ATresEnemyPawn_e_ex064::ATresEnemyPawn_e_ex064() {
    this->m_ShipBodyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("e_ex064_ShipBodyMesh"));
    this->m_ShipMastMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("e_ex064_ShipMastMesh"));
}

