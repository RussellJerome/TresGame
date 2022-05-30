#include "TresHitActor_e_he90x.h"

class AActor;


void ATresHitActor_e_he90x::SetCollisionEnabled(bool inSet, float inHeight, float InRadius, FVector inCenterOffset) {
}

void ATresHitActor_e_he90x::OnEndOverlap(AActor* inOtherActor) {
}

void ATresHitActor_e_he90x::OnBeginOverlap(AActor* inOtherActor) {
}

bool ATresHitActor_e_he90x::IsCollisionEnabled() const {
    return false;
}

ATresHitActor_e_he90x::ATresHitActor_e_he90x() {
    this->m_MyCollMesh = NULL;
    this->m_MyOverlapMesh = NULL;
    this->m_bEnablePlayerTickCheck = true;
    this->m_bDebugCollDisabled = false;
}

