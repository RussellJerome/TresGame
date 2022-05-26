#include "TresGumiShipEnemyGenerator.h"
#include "TresGumiShipEnemyGroupManager.h"

class UPrimitiveComponent;
class AActor;

ETresGumiShipEnemySpawnConditionType ATresGumiShipEnemyGenerator::GetSubEnemySpawnConditionType() const {
    return ETresGumiShipEnemySpawnConditionType::TRIGGER_COLLISION_OVERLAP;
}

ETresGumiShipEnemySpawnConditionType ATresGumiShipEnemyGenerator::GetMainEnemySpawnConditionType() const {
    return ETresGumiShipEnemySpawnConditionType::TRIGGER_COLLISION_OVERLAP;
}

void ATresGumiShipEnemyGenerator::_OnSubSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData) {
}

void ATresGumiShipEnemyGenerator::_OnSubSpawnConditionOtherEnemyGroupDisappear() {
}

void ATresGumiShipEnemyGenerator::_OnMainSpawnConditionOtherEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData) {
}

void ATresGumiShipEnemyGenerator::_OnMainSpawnConditionOtherEnemyGroupDisappear() {
}

void ATresGumiShipEnemyGenerator::_OnLeaveEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipEnemyGenerator::_OnEnterEnemySpawnTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGumiShipEnemyGenerator::_OnDisappearTriggerOtherEnemyGroupAppear() {
}

ATresGumiShipEnemyGenerator::ATresGumiShipEnemyGenerator() {
    this->m_pUsingEnemyPresetDataTable = NULL;
    this->m_uMaxAttackPermissionNum = 1;
    this->m_eEnemyGroupMoveType = ETresGumiShipEnemyGroupMoveType::FIXED_LOCATION;
    this->m_eMainEnemySpawnConditionType = ETresGumiShipEnemySpawnConditionType::TRIGGER_COLLISION_OVERLAP;
    this->m_bEnableSubEnemySpawnCondition = false;
    this->m_eSubEnemySpawnConditionType = ETresGumiShipEnemySpawnConditionType::OTHER_ENEMY_GROUPS_WIPE_OUT;
    this->m_fEnemyGroupSpawnDelayTime = 0.00f;
    this->m_bSpawnEnemyLookAtGumiShip = false;
    this->m_eEnemyGroupDisappearType = ETresGumiShipEnemyGroupDisappearType::LIFE_TIME_OUT;
    this->m_eEnemyGroupDisappearTime = 10.00f;
    this->m_pDisappearTriggerOtherEnemyGroup = NULL;
    this->m_pEnemyGroupManager = CreateDefaultSubobject<UTresGumiShipEnemyGroupManager>(TEXT("GumiShipEnemyGroupManager"));
}

