#include "TresVehiclePawnGigas.h"
#include "TresMapMarkerComponent.h"
#include "TresReactorComponent.h"
#include "Components/CapsuleComponent.h"
#include "TresSkeletalMeshComponent.h"

class ATresCameraBase;

void ATresVehiclePawnGigas::TeleportGigas(const FVector& InLocation, const FRotator& InRotation) {
}

bool ATresVehiclePawnGigas::SetElectroBeamStartEnd(bool bEnd) {
    return false;
}

bool ATresVehiclePawnGigas::SetDirectJump(float InSpeedZ, float InLimitZ) {
    return false;
}

bool ATresVehiclePawnGigas::SetCameraAttachMode(ATresCameraBase* InCamera) {
    return false;
}

bool ATresVehiclePawnGigas::SetArmUpDown(bool InUp) {
    return false;
}

bool ATresVehiclePawnGigas::IsRideEvent() const {
    return false;
}

bool ATresVehiclePawnGigas::IsRidden() const {
    return false;
}

bool ATresVehiclePawnGigas::IsLeaveEvent() const {
    return false;
}

bool ATresVehiclePawnGigas::IsElectroEvent() const {
    return false;
}

float ATresVehiclePawnGigas::GetUpperMotAlpha() const {
    return 0.0f;
}

float ATresVehiclePawnGigas::GetRotPitch() const {
    return 0.0f;
}

float ATresVehiclePawnGigas::GetCameraApplyAlpha() const {
    return 0.0f;
}

float ATresVehiclePawnGigas::GetAddMotAlpha() const {
    return 0.0f;
}

bool ATresVehiclePawnGigas::EndElectroState() {
    return false;
}

ATresVehiclePawnGigas::ATresVehiclePawnGigas() {
    this->m_ProjMachineGun = NULL;
    this->m_ProjCannon = NULL;
    this->m_ProjBomb = NULL;
    this->m_CameraShakeBig = NULL;
    this->m_EffAssetDashStart = NULL;
    this->m_SndAssetBoost = NULL;
    this->m_Param_ShotRate = 1.00f;
    this->m_Param_RotSpeedYaw = 1.10f;
    this->m_Param_RotSpeedPitch = 0.65f;
    this->m_Param_RotPitchMax = 55.00f;
    this->m_Param_RotPitchMin = -55.00f;
    this->m_Param_CameraFieldOfView = 100.00f;
    this->m_Param_BombPitch = 45.00f;
    this->m_Param_BombYaw = 16.00f;
    this->m_Param_BombLagTime = 0.00f;
    this->m_Param_AttackMoveRate = 0.70f;
    this->m_Param_LandMotVelZ = -1000.00f;
    this->m_Param_AirControl = 0.80f;
    this->m_Param_BoostFirstUseValue = 5.00f;
    this->m_Param_BoostUseValue = 25.00f;
    this->m_Param_BoostRecoveryLag = 1.50f;
    this->m_Param_BoostRecoverySpeed = 40.00f;
    this->m_Param_BoostMaxXY = 2000.00f;
    this->m_Param_BoostMaxZ = 1400.00f;
    this->m_Param_BoostAddZ = 100.00f;
    this->m_Param_bBoostLandOnly = true;
    this->m_Param_DashUseValue = 30.00f;
    this->m_Param_DashSpeed = 6000.00f;
    this->m_Param_DashBrake = 0.96f;
    this->m_Param_DashSpeedZ = 2000.00f;
    this->m_Param_TackleUseValue = 30.00f;
    this->m_Param_TackleSpeed = 8000.00f;
    this->m_Param_TackleBrake = 0.93f;
    this->m_Param_CanonBombReloadTime = 5.00f;
    this->m_Param_LifeTimeLimit = 30.00f;
    this->m_Param_DebugShadowDisp = false;
    this->m_FullMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresVehicleGigasFullMesh"));
    this->m_Reactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresVehicleGigasReactor"));
    this->m_pElectroGimmick = NULL;
    this->m_pElectroReactor = NULL;
    this->m_EffectDash = NULL;
    this->m_BlockCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TresVehicleGigasBlockCollision"));
    this->m_MapMarkerComponent = CreateDefaultSubobject<UTresMapMarkerComponent>(TEXT("TresVehicleGigasMapMarker"));
    this->m_BoostSE = NULL;
}

