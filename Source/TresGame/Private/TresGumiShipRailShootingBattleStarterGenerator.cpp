#include "TresGumiShipRailShootingBattleStarterGenerator.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipRailShootingBattleStarterGenerator::_OnLeaveActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATresGumiShipRailShootingBattleStarterGenerator::_OnEnterActivateTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresGumiShipRailShootingBattleStarterGenerator::ATresGumiShipRailShootingBattleStarterGenerator() {
    this->m_pEncountSymbolMoveRouteSpline = NULL;
    this->m_pEncountSymbolActivateTrigger = NULL;
}

