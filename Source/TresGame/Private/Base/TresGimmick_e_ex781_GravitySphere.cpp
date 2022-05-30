#include "TresGimmick_e_ex781_GravitySphere.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

ATresGimmick_e_ex781_GravitySphere::ATresGimmick_e_ex781_GravitySphere() {
    this->MyGravityCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GravitySceneCollision0"));
    this->MyCatchDetectCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CatchDetectCollision0"));
    this->MyDomeCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DomeCollision0"));
    this->MyFloorCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorCollision0"));
    this->m_GravitySceneHeight = 1500.00f;
    this->m_GravitySceneDomeEffect = NULL;
    this->m_GravitySceneGrbObject = NULL;
    this->m_GravityWaveEffectUp = NULL;
    this->m_GravityWaveEffectPull = NULL;
    this->m_GravityWaveEffectPush = NULL;
    this->m_GravityWaveEffectGrpUp = 10;
    this->m_GravityWaveEffectGrpPull = -1;
    this->m_GravityWaveEffectGrpPush = 15;
    this->m_CraftSceneDomeEffect = NULL;
    this->m_CraftSceneStartBlendCurve = NULL;
    this->m_CraftSceneEndBlendCurve = NULL;
    this->m_CrimaxSceneHeight = 400.00f;
    this->m_CrimaxSceneTimer = 60.00f;
    this->m_CrimaxSceneDomeEffect = NULL;
    this->m_CrimaxSceneCoreEffectGrp = 20;
    this->m_CrimaxSceneGravityPower = 500.00f;
    this->m_CrimaxSceneRateCurve = NULL;
    this->m_VacuumParticleEffData = NULL;
    this->m_DesappearDeTouchTime = 0.00f;
    this->m_HighVoltageCameraClass = NULL;
    this->m_GravitySceneSplineClass = NULL;
    this->m_MyTarget = NULL;
    this->m_CatchPawn = NULL;
    this->m_pGravityWaveEffect = NULL;
    this->m_pPlayerPullEffect = NULL;
    this->m_pGravityEffectCurve = NULL;
    this->m_pReqGravityEffectCurve = NULL;
    this->m_pDomeEffect = NULL;
    this->m_pGrbObjEffect = NULL;
    this->m_pBlendVolumeTarget = NULL;
    this->m_pBlendVolumeCurve = NULL;
    this->m_pCamera = NULL;
}

