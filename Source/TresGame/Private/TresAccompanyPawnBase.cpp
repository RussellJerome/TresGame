#include "TresAccompanyPawnBase.h"
#include "TresSkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"




FVector ATresAccompanyPawnBase::BP_GetSafetyPos() const {
    return FVector{};
}

ATresAccompanyPawnBase::ATresAccompanyPawnBase() {
    this->m_UIDataAccompany = NULL;
    this->MyPenetrationEffectMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresEffectMesh0"));
    this->MyPenetrationParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TresPenetrationEffect0"));
    this->m_VoiceData = NULL;
    this->m_PlayerController = NULL;
    this->m_bDispDebugInfo = false;
    this->m_BGMAsset = NULL;
    this->m_Param_MaxTime = 30.00f;
    this->m_Param_MoveTurnSpeed = 360.00f;
    this->m_Param_JumpRotRate = 0.80f;
    this->m_Param_FallCheckHeight = 0.00f;
    this->m_Param_bZMoveLand = false;
    this->m_Param_bLargeSpawn = false;
    this->m_Param_LandSpawnHeight = 1200.00f;
}

