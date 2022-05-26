#include "TresEncountVolume.h"

void ATresEncountVolume::Stop() {
}

void ATresEncountVolume::Start() {
}

ATresEncountVolume::ATresEncountVolume() {
    this->m_VehicleMode = ETresEncountVolumeVehicleMode::DoNotCare;
    this->m_SnapTarget = ETresEncountVolumeSnapTarget::Snap_Nothing;
    this->m_MinMovement = 0.00f;
    this->m_MaxMovement = 0.00f;
    this->m_MinMovementAfterBattle = 0.00f;
    this->m_ClampRateOfMovement = 1.00f;
    this->m_ClampRateOfMinMovement = 0.60f;
    this->m_EventNameOnSpawn = TEXT("program_StartSpawnTroops");
    this->m_CollResponse = ECR_Block;
    this->m_BattleOwner = NULL;
    this->m_SubEQSVolume = NULL;
    this->m_SpawnedBattleOwner = NULL;
    this->m_RewardsTbl = NULL;
}

