#include "TresGumiShipGimmickTreasure.h"
#include "Camera/CameraComponent.h"

class AActor;
class UObject;
class UPrimitiveComponent;

void ATresGumiShipGimmickTreasure::GumiShip_Debug_ForcedTermination_TreasureSphere() {
}

bool ATresGumiShipGimmickTreasure::_SetPlayEventMode(GUMI_SHIP_GIMMICK_PLAYER_MODE _mode) {
    return false;
}

bool ATresGumiShipGimmickTreasure::_SetPlayerPos() {
    return false;
}

void ATresGumiShipGimmickTreasure::_SetCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float pos) {
}

void ATresGumiShipGimmickTreasure::_PlayRailSlid(const UObject* worldContextObject_, FLatentActionInfo latentInfo_) {
}

void ATresGumiShipGimmickTreasure::_OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult) {
}

void ATresGumiShipGimmickTreasure::_OnHitTreasure(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

bool ATresGumiShipGimmickTreasure::_IsStateEnd() {
    return false;
}

bool ATresGumiShipGimmickTreasure::_IsShotCore() {
    return false;
}

bool ATresGumiShipGimmickTreasure::_InitRailSlid() {
    return false;
}

GUMI_SHIP_TREASURE_STATE ATresGumiShipGimmickTreasure::_GetState() {
    return GUMI_SHIP_TREASURE_STATE::TREASURE_STATE_IDLEING;
}

GUMI_SHIP_GIMMICK_TREASURE_STATE ATresGumiShipGimmickTreasure::_GetRailSlidResult() {
    return GUMI_SHIP_GIMMICK_TREASURE_STATE::_TREASURE_SUCCESS_;
}

void ATresGumiShipGimmickTreasure::_ChangeState(GUMI_SHIP_TREASURE_STATE StateID) {
}

void ATresGumiShipGimmickTreasure::_AddCorePartsLoops(const UObject* worldContextObject_, FLatentActionInfo latentInfo_, float Speed, float Time) {
}

ATresGumiShipGimmickTreasure::ATresGumiShipGimmickTreasure() {
    this->m_GimmickTreasureDataTable = NULL;
    this->m_Arrangement = NULL;
    this->m_pTreasureCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TreasureCamera"));
    this->m_WorldMapID = ETresGumiShipTreasureSphereID::E_GM01_TR_01;
}

