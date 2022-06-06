#include "TresTornadoDebrisActorBase.h"


void ATresTornadoDebrisActorBase::SetDebrisRotation(FRotator inRot) {
}

FVector ATresTornadoDebrisActorBase::GetLocalEvadeLocation(float inMaxEvadeDistance, float inEvadeRadius, float inMinVelocity, float inMaxVelocity, float InDeltaTime) {
    return FVector{};
}


ATresTornadoDebrisActorBase::ATresTornadoDebrisActorBase() {
    this->m_pRotateSceneComp = NULL;
    this->m_pDebrisMeshComp = NULL;
    this->m_iPushLevel = 0;
    this->m_DestinationEffectClass = NULL;
    this->m_LockonComp = NULL;
    this->m_Player = NULL;
    this->m_bNowEvade = false;
    this->m_DestinationEffectComp = NULL;
}

