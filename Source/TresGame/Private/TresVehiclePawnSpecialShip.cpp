#include "TresVehiclePawnSpecialShip.h"
#include "TresSkeletalMeshComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresReactorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresCAShipComponent.h"

class AActor;

void ATresVehiclePawnSpecialShip::OnStartBossDefeatEffect() {
}

AActor* ATresVehiclePawnSpecialShip::GetShipJumpNote() const {
    return NULL;
}

void ATresVehiclePawnSpecialShip::BP_SetRestrictionActoin(bool InRestrictionActoin) {
}

void ATresVehiclePawnSpecialShip::BP_SetMaterialFadeCutChange(bool InCutChange) {
}

void ATresVehiclePawnSpecialShip::BP_SetMaterialFade(bool InEnable) {
}

bool ATresVehiclePawnSpecialShip::BP_SetInputEnemyShip(AActor* InEnemyShip) {
    return false;
}

void ATresVehiclePawnSpecialShip::BP_SetCameraSpecialShipRotationAll(FRotator Rot, bool bWorld) {
}

void ATresVehiclePawnSpecialShip::BP_SetBattleModeCapture(bool InBattleModeCapture) {
}

bool ATresVehiclePawnSpecialShip::BP_RequestStop() {
    return false;
}

bool ATresVehiclePawnSpecialShip::BP_OpenNauticalChartUI() {
    return false;
}

void ATresVehiclePawnSpecialShip::BP_JumpOverallCameraStart() {
}

void ATresVehiclePawnSpecialShip::BP_JumpOverallCameraEnd() {
}

bool ATresVehiclePawnSpecialShip::BP_IsLongCameraMode() const {
    return false;
}

bool ATresVehiclePawnSpecialShip::BP_GetTroopsRewardData(TArray<FName>& OutItemKeyNames, TArray<int32>& OutItemNums, TArray<TEnumAsByte<PRIZE_KIND>>& OutPrizeItems) const {
    return false;
}

FRotator ATresVehiclePawnSpecialShip::BP_GetCameraLocalRotation() const {
    return FRotator{};
}

void ATresVehiclePawnSpecialShip::BP_BattleEndFocePlay() {
}

ATresVehiclePawnSpecialShip::ATresVehiclePawnSpecialShip() {
    this->m_PlayerCameraSpecialShip = NULL;
    this->m_PlayerCameraSpecialShip2 = NULL;
    this->m_PlayerCameraSpecialShipMaelstrom = NULL;
    this->m_PlayerCameraSpecialShipMaelstrom2 = NULL;
    this->m_PlayerCameraSpecialShipLoc = NULL;
    this->m_PlayerCameraSpecialShipHiSpd = NULL;
    this->m_PlayerCameraSpecialShipRagingCannon = NULL;
    this->m_PlayerCameraSpecialShipMaelstromRagingCannon = NULL;
    this->m_PlayerCameraSpecialShipWindChaser = NULL;
    this->m_PlayerCameraSpecialShipTidalWave = NULL;
    this->m_ProjCannon = NULL;
    this->m_ProjRagingCannon = NULL;
    this->m_ProjWindChaser = NULL;
    this->m_ProjShadowMissileExp = NULL;
    this->m_AimEffAsset = NULL;
    this->m_GuardEffAsset = NULL;
    this->m_GuardSuccessSmallEffAsset = NULL;
    this->m_GuardSuccessLargeEffAsset = NULL;
    this->m_SeaGodEffAsset = NULL;
    this->m_EffectDataAsset = NULL;
    this->m_TreasureBoxClass = NULL;
    this->m_Param_MaxSpeedSlow = 2000.00f;
    this->m_Param_MaxSpeedNormal = 2500.00f;
    this->m_Param_MaxSpeedFast = 4000.00f;
    this->m_Param_MaxSpeedFastBattle = 3000.00f;
    this->m_Param_MaxSpeedFastLuxordCompe = 3400.00f;
    this->m_Param_MaxSpeedJump = 10000.00f;
    this->m_Param_AccSpeed = 3000.00f;
    this->m_Param_DecSpeed = -3000.00f;
    this->m_Param_JumpAccDecSpeedRate = 2.00f;
    this->m_Param_RotInputPower = 2.00f;
    this->m_Param_LStickRotate = false;
    this->m_Param_AimFrontCameraYaw = 30.00f;
    this->m_Param_AimSideCameraYaw = 120.00f;
    this->m_Param_ScopeTargetDist = 40000.00f;
    this->m_Param_ScopeZOffset = 7000.00f;
    this->m_Param_ScopeZOffsetFront = 7000.00f;
    this->m_Param_ScopeZOffsetRaging = 7000.00f;
    this->m_Param_ScopeZOffsetRagingFront = 7000.00f;
    this->m_Param_ScopeLockNeedTime = 0.10f;
    this->m_Param_ScopeLockRot = 10.00f;
    this->m_Param_ScopeLockRayRadius = 50.00f;
    this->m_Param_GuardTime = 1.50f;
    this->m_Param_GuardStun = 1.00f;
    this->m_Param_DamageBanTime = 0.50f;
    this->m_Param_ConvergingFire = false;
    this->m_Param_CannonLv = 1;
    this->m_Param_CannonInterval = 2.00f;
    this->m_Param_CannonIntervalFront = 1.00f;
    this->m_Param_CannonPitch = 10.00f;
    this->m_Param_CannonPitchFront = 10.00f;
    this->m_Param_CannonPitchMaelstromLongCamera = 15.00f;
    this->m_Param_CannonPitchMaelstromLongCameraFront = 15.00f;
    this->m_Param_CannonLimitPitchMax = 50.00f;
    this->m_Param_CannonLimitPitchMin = 0.00f;
    this->m_Param_CannonLimitYaw = 50.00f;
    this->m_Param_CannonTargetLimitPitchMax = 70.00f;
    this->m_Param_CannonTargetLimitPitchMin = -25.00f;
    this->m_Param_CannonTargetLimitYaw = 85.00f;
    this->m_Param_CannonFinalLimitPitchMax = 60.00f;
    this->m_Param_CannonFinalLimitPitchMin = -20.00f;
    this->m_Param_CannonFinalLimitYaw = 80.00f;
    this->m_Param_CannonFrontHomingTurnMax = 90.00f;
    this->m_Param_RagingCannonTimeLimit = 10.00f;
    this->m_Param_RagingCannonInterval = 0.10f;
    this->m_Param_WindChaserTimeLimit = 10.00f;
    this->m_Param_WindChaserInterval = 0.20f;
    this->m_Param_DashSpeed = 10000.00f;
    this->m_Param_DashTime = 2.00f;
    this->m_Param_DashSpeedLuxordCompe = 10000.00f;
    this->m_Param_DashTimeLuxordCompe = 2.00f;
    this->m_Param_JumpPushPowerLevel = ETresBodyPushPowerLevel::PPL_30;
    this->m_Param_MastFadeMin = 0.80f;
    this->m_Param_CameraCollDisableTimeLongCamera = 0.30f;
    this->m_Param_CameraCollDisableTimeRagingCannon = 0.30f;
    this->m_Param_CameraCollDisableTimeGuard = 0.30f;
    this->m_Param_AddSeaGodGauge_CoreBreak = 1000;
    this->m_Param_AddSeaGodGauge_MastBreak = 200;
    this->m_Param_AddSeaGodGauge_MissileBreak = 200;
    this->m_Param_AddSeaGodGauge_CannonHit = 5;
    this->m_Param_AddSeaGodGauge_DashHit = 100;
    this->m_Param_BattleModeCaptureLimit = 30.00f;
    this->m_Param_MaelstromBaseRadius = 5000.00f;
    this->m_Param_MaelstromBaseStartRot = 323.00f;
    this->m_Param_MaelstromSpeedMin = 6.00f;
    this->m_Param_MaelstromSpeedMax = 12.00f;
    this->m_Param_MaelstromAccSpeed = 3.00f;
    this->m_Param_MaelstromDecSpeed = -4.00f;
    this->m_Param_MaelstromRotCurve = NULL;
    this->m_Param_MaelstromRotCurveCycleTime = 5.00f;
    this->m_EffAssetMaelstromTrajectory = NULL;
    this->m_SndAssetHitShip = NULL;
    this->m_Param_OscPitchG = 2.00f;
    this->m_Param_OscPitchK = 1.00f;
    this->m_Param_OscRollG = 2.00f;
    this->m_Param_OscRollK = 1.00f;
    this->m_pEffTrajectoryTop = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("m_pEffTrajectoryTop"));
    this->m_pEffTrajectoryBack = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("m_pEffTrajectoryBack"));
    this->m_pEffTrajectoryLeft = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("m_pEffTrajectoryLeft"));
    this->m_pEffTrajectoryRight = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("m_pEffTrajectoryRight"));
    this->m_MastMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresShipMastMesh"));
    this->m_PropsMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipPropsMesh"));
    this->m_FloorCollMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipFloorCollMesh"));
    this->m_FloorCollMesh2 = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipFloorCollMesh2"));
    this->m_CannonCollMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipCannonCollMesh"));
    this->m_CameraCollMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresShipCameraCollMesh"));
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresShipReactor"));
    this->m_Camera = NULL;
    this->m_NormalCamera = NULL;
    this->m_HiSpeedCamera = NULL;
    this->m_SeaGodCamera = NULL;
    this->m_SeaGodEffect = NULL;
    this->m_GuardEffect = NULL;
    this->m_pShipJumpNote = NULL;
    this->m_AimEffect = NULL;
    this->m_pEnemyShipPawn = NULL;
    this->m_CAShipComp = CreateDefaultSubobject<UTresCAShipComponent>(TEXT("CAShipComponent"));
    this->m_MaelstromTrajectory = NULL;
    this->m_pTreasureBox = NULL;
}

