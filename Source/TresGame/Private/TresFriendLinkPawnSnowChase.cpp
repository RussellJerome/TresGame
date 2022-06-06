#include "TresFriendLinkPawnSnowChase.h"

class AActor;

void ATresFriendLinkPawnSnowChase::SnowChaseSetCameraAreaBox(AActor* inActor) {
}

void ATresFriendLinkPawnSnowChase::SnowChaseApplayAvalancheDamage() {
}

ATresFriendLinkPawnSnowChase::ATresFriendLinkPawnSnowChase() {
    this->MaxSpeed_ = 2000.00f;
    this->MinSpeed_ = 1000.00f;
    this->Acceleration_ = 150.00f;
    this->MaxSideVelocity_ = 2000.00f;
    this->SideAcceleration_ = 2000.00f;
    this->SideDeceleration_ = 2000.00f;
    this->DamageDeceleration_ = -400.00f;
    this->DamageAccelerationDelayTime_ = 2.00f;
    this->DamageUnconrollableTime_ = 0.40f;
    this->JumpDeniedTime_ = 1.00f;
    this->LandingDeceleration_ = 0.00f;
    this->WallHitDelayTime_ = 1.00f;
    this->WallHitDeceleration_ = 0.00f;
    this->CameraLookAtOffsetZ_ = 180.00f;
    this->CameraDistance_ = 700.00f;
    this->CameraPitch_ = 20.00f;
    this->CameraWallLookAtOffsetStart_ = 1400.00f;
    this->CameraWallLookAtOffsetFinal_ = 400.00f;
    this->CameraWallLookAtOffsetType_ = 5;
    this->LeftScaleParam_ = 0.00f;
    this->RightScaleParam_ = 0.00f;
    this->Camera_ = NULL;
    this->SlideEffect_ = NULL;
    this->SlideRotationEffect_ = NULL;
    this->WindEffect_ = NULL;
    this->BlizzardEffect_ = NULL;
    this->ShortJumpLandEffect_ = NULL;
    this->WheelTrackEffect_ = NULL;
    this->AvalancheDamageEffect_ = NULL;
    this->AvalanchePostEffect_ = NULL;
    this->BlizzardAttachData_ = NULL;
    this->EventCutFlag_ = false;
    this->DisableInputMove_ = false;
    this->m_bEnableEquipmentSnowDepth_ = false;
    this->ShortJumpVectorLerpTime_ = 0.70f;
    this->FallAcceleration_ = 1000.00f;
}

