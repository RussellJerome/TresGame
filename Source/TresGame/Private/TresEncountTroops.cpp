#include "TresEncountTroops.h"
#include "Components/SceneComponent.h"

ATresEncountTroops::ATresEncountTroops() {
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TresRoot"));
    this->m_BattleAreaWidth = 75000.00f;
    this->m_BattleAreaWidthExtra = 0.00f;
    this->m_BattleAreaOffsetLength = 0.00f;
    this->m_BattleAreaAbortRange = 37500.00f;
    this->m_SubEQSAreaWidth = 0.00f;
    this->m_EnemyRadius = 3000.00f;
}

