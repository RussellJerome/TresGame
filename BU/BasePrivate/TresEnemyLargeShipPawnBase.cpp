#include "TresEnemyLargeShipPawnBase.h"
#include "TresReactorComponent.h"
#include "TresStaticMeshComponent.h"

class ATresEnemyPawnBase;

bool ATresEnemyLargeShipPawnBase::TestBGOverlap(const FRotator& Rotation) const {
    return false;
}

void ATresEnemyLargeShipPawnBase::SetEnableBattleOnBoard(bool Value) {
}






float ATresEnemyLargeShipPawnBase::GetSuicideTime() const {
    return 0.0f;
}

void ATresEnemyLargeShipPawnBase::ForceSetBattleOnBoardMode() {
}

bool ATresEnemyLargeShipPawnBase::EnableBattleOnBoard() const {
    return false;
}

ATresEnemyPawnBase* ATresEnemyLargeShipPawnBase::BP_SpawnOtherShip(ETresEnemyUniqueID EnemyID, FVector Location, TEnumAsByte<EEnemyLargeShipBase::Type> RotType, bool bRequireCoreFacedToPlayer) {
    return NULL;
}

ATresEnemyLargeShipPawnBase::ATresEnemyLargeShipPawnBase() {
    this->m_PropsMeshOnBoard = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("EnemyShipBase_PropsMeshOnBoardName"));
    this->m_TemplateForOverlapCheck = NULL;
    this->m_TemplateOfBattleOnBoardCollision = NULL;
    this->m_FireSparkParticleAsset = NULL;
    this->m_FireSparkParticleComponent = NULL;
    this->m_CollMeshActorOnBoardBattle = NULL;
    this->m_ReactorComp = CreateDefaultSubobject<UTresReactorComponent>(TEXT("EnemyShipBase_Reactor"));
    this->m_bEnableBattleOnBoard = true;
    this->m_bEnableKillOtherShipsOnDead = false;
    this->m_ShipSinkingStartTime = 10.00f;
    this->m_ShipSinkingHP = 100.00f;
    this->m_SuicideTime = -1.00f;
}

