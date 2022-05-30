#include "TresGumiShipParts708Pawn.h"

class UPrimitiveComponent;
class AActor;

void ATresGumiShipParts708Pawn::_OnHitTreasure(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit) {
}

ATresGumiShipParts708Pawn::ATresGumiShipParts708Pawn() {
    this->m_pDeadAssetVFX = NULL;
    this->m_pBackfire2VFX = NULL;
    this->m_pExplosionVFX = NULL;
    this->m_fMoveSpeed = 50.00f;
    this->m_fAnglespeed = 1.50f;
    this->m_fMaxYaw = 90.00f;
    this->m_fFlyTime = 10.00f;
    this->m_fExplosion = 800.00f;
    this->m_fAdvanceDistance = 3000.00f;
}

