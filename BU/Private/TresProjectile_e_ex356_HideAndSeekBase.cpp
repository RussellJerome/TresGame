#include "TresProjectile_e_ex356_HideAndSeekBase.h"
#include "TresSceneComponent_e_ex356_HideAndSeekSpawn.h"

ATresProjectile_e_ex356_HideAndSeekBase::ATresProjectile_e_ex356_HideAndSeekBase() {
    this->MyHideAndSeekSpawnComponent = CreateDefaultSubobject<UTresSceneComponent_e_ex356_HideAndSeekSpawn>(TEXT("MyHideAndSeekSpawn"));
    this->m_GimmickCardAnimInterpTime = 0.20f;
    this->m_bEnableGimmickCardAnimBrake = false;
    this->m_GimmickCardAnimBrakeRate = 0.00f;
    this->m_bIsAnimStartOnGround = false;
    this->m_bEnableOvertakeGravity = false;
    this->m_bDisableUpwardHoming = false;
    this->m_bEnableGuardedDestroy = false;
    this->m_bEnableScaleUpdate = false;
    this->m_ScaleUpdateStartTime = 0.50f;
    this->m_TargetScale = 1.00f;
    this->m_ScaleUpdateInterpTime = 0.50f;
    this->m_bEnableMeshRotationSycParticle = false;
    this->m_AppearParticleSystem = NULL;
    this->m_UniqueParticleSystem = NULL;
    this->m_AttributeDestroyParticleSystem = NULL;
    this->m_SmokeParticleSystem = NULL;
}

