#include "TresFriendLinkPawnBaymaxRide.h"

class AActor;
class UTresLockonTargetComponent;

void ATresFriendLinkPawnBaymaxRide::SetEffectWindBlur(bool bOn) {
}

void ATresFriendLinkPawnBaymaxRide::OnStartBossDefeatEffect() {
}

float ATresFriendLinkPawnBaymaxRide::GetLockonTargetToFloorDist() const {
    return 0.0f;
}

UTresLockonTargetComponent* ATresFriendLinkPawnBaymaxRide::GetLockonTargetLockonTargetComponent() const {
    return NULL;
}

float ATresFriendLinkPawnBaymaxRide::GetLockonTargetActorRadius() const {
    return 0.0f;
}

AActor* ATresFriendLinkPawnBaymaxRide::GetLockonTargetActor() const {
    return NULL;
}

ATresFriendLinkPawnBaymaxRide::ATresFriendLinkPawnBaymaxRide() {
    this->m_PlayerCameraBaymaxRide = NULL;
    this->m_PlayerCameraBaymaxRideCombo = NULL;
    this->m_ProjShot = NULL;
    this->m_Param_ShotMoveSpeedRate = 0.80f;
    this->m_Param_DodgeSTSpeed = 15000.00f;
    this->m_Param_DodgeSTBrake = 0.95f;
    this->m_Param_DodgeLRSpeed = 15000.00f;
    this->m_Param_DodgeLRBrake = 0.95f;
    this->m_Param_DodgeToLockonTarget = false;
    this->m_Param_CareSprayRecoveryPoint = 100;
    this->m_Param_CareSprayReloadTime = 1.00f;
    this->m_Param_SmallDamagePower = 400.00f;
    this->m_Param_SmallDamageBrake = 0.95f;
    this->m_Param_BlowDamagePower = 2000.00f;
    this->m_Param_BlowDamageBrake = 0.95f;
    this->m_Param_FinishPointDarkCubeShot = 30;
    this->m_Param_FinishPointDarkCubeMine = 10;
    this->m_Param_FinishPointCombo = 3;
    this->m_EffAssetDamage = NULL;
    this->m_ProjRailSlideShot = NULL;
    this->m_EffAssetRailSlideHajiki = NULL;
    this->m_Param_RailSlideShotMoveSpeedRate = 0.80f;
    this->m_Param_RailSlideDodgeSpeed = 4000.00f;
    this->m_Param_RailSlideDodgeBrake = 0.93f;
    this->m_Param_RailSlideCameraFOV = 70.00f;
    this->m_Param_RailSlideCameraRotPower = 0.00f;
    this->m_Param_RailSlideSpeed = 5000.00f;
    this->m_Param_RailSlideSpeedBlur = 3500.00f;
    this->m_Param_RailSlideOffsetSpeed = 800.00f;
    this->m_Param_RailSlideOffsetBrake = 0.90f;
    this->m_Camera = NULL;
    this->m_CameraCombo = NULL;
    this->m_pRailSlideCamera = NULL;
}

