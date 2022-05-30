#include "TresFriendLinkPawnSnowCurling.h"

class AActor;

void ATresFriendLinkPawnSnowCurling::UpdateSpeed_Implementation() {
}

void ATresFriendLinkPawnSnowCurling::UpdateRotationScale_Implementation() {
}

void ATresFriendLinkPawnSnowCurling::UpdateCamera_Implementation(bool Force) {
}

void ATresFriendLinkPawnSnowCurling::SnowCurlingSetDirectionalBox(AActor* inActor, bool bPriorityHigh) {
}

void ATresFriendLinkPawnSnowCurling::SnowCurlingSetBigJumpArea(bool inArea) {
}

void ATresFriendLinkPawnSnowCurling::SnowCurlingRequestFixBigJump() {
}

void ATresFriendLinkPawnSnowCurling::SnowCurlingRemoveDirectionalBox(AActor* inActor, bool bPriorityHigh) {
}

bool ATresFriendLinkPawnSnowCurling::SnowCurlingPreGoalEnd() {
    return false;
}

bool ATresFriendLinkPawnSnowCurling::SnowCurlingPreGoalBegin(float pitchDegree, float targetOffsetZ, float Distance, FVector goalPosition, bool useGoal) {
    return false;
}

void ATresFriendLinkPawnSnowCurling::SetupCamera_Implementation() {
}


void ATresFriendLinkPawnSnowCurling::OnHit_Implementation(EPhysicalSurface surfType) {
}

float ATresFriendLinkPawnSnowCurling::GetShortJumpFloorPitch() const {
    return 0.0f;
}

void ATresFriendLinkPawnSnowCurling::EndShortJump_Implementation() {
}

void ATresFriendLinkPawnSnowCurling::EndJump_Implementation() {
}

void ATresFriendLinkPawnSnowCurling::BeginShortJump_Implementation() {
}

void ATresFriendLinkPawnSnowCurling::BeginJump_Implementation() {
}

ATresFriendLinkPawnSnowCurling::ATresFriendLinkPawnSnowCurling() {
    this->Speed_ = 0.00f;
    this->SpeedRate_ = 0.00f;
    this->FirstSpeed_ = 2000.00f;
    this->MaxSpeed_ = 6000.00f;
    this->MinSpeed_ = 2000.00f;
    this->AccelSpeed_ = 10.00f;
    this->RestartSpeed_ = 100.00f;
    this->AccelSpeedHitting_ = 10.00f;
    this->AccelSpeedRestart_ = 1000.00f;
    this->TurnAngleHitting_ = 100.00f;
    this->TurnAngleRestart_ = 40.00f;
    this->SlopeDecelerationPich_ = 10.00f;
    this->SlopeDeceleration_ = 10.00f;
    this->RotationSpeed_ = 80.00f;
    this->RotationSpeedHitting_ = 80.00f;
    this->RotationLimit_ = 15.00f;
    this->MaxRotateInputSec_ = 0.50f;
    this->CurrentRotation_ = 0.00f;
    this->CorrectVectorPitch_ = 40.00f;
    this->CorrectVectorRoll_ = 30.00f;
    this->SteepPitch_ = -20.00f;
    this->ExtremePitch_ = -40.00f;
    this->WallHitSpeed_ = -1000.00f;
    this->GravityAccelRate_ = 1.00f;
    this->WallHitSpeedDelayTime_ = 0.50f;
    this->WallHitSpeedRestartTime_ = 3.00f;
    this->WallHitUncontrollableTime_ = 0.80f;
    this->WallHitContinuousHitPrevetionTime_ = 0.30f;
    this->WallHitKnockBackTime_ = 0.60f;
    this->WallHitAirKnockBackTime_ = 1.14f;
    this->WallHitKnockBackAngle_ = 20.00f;
    this->WallHitNormalReflect_ = 200.00f;
    this->WallRockUpCos_ = 0.80f;
    this->WallRockHitVeloCos_ = 0.20f;
    this->WallRockRaiseBorder_ = 100.00f;
    this->WallRideCos_ = 0.20f;
    this->WallFallCheckDistance_ = -64.00f;
    this->WallFallDownRate_ = 0.80f;
    this->SpeedDelayTimer_ = 0.00f;
    this->SpeedRestartTimer_ = 0.00f;
    this->SlopeInclination_ = 0.00f;
    this->BlendParamRate_ = 5.00f;
    this->IgnoreIceRailJumpSec_ = 1.00f;
    this->IgnoreIceRailShortJumpSec_ = 0.50f;
    this->IgnoreIceRailAirSec_ = 1.00f;
    this->StartableIceRailRange_ = 300.00f;
    this->StartableMove2IceRail_ = true;
    this->StartableIceRailUnderLoc_ = true;
    this->CameraGentryLookAtOffsetZ_ = 150.00f;
    this->CameraGentryPitch_ = -12.00f;
    this->CameraGentryDistance_ = 300.00f;
    this->CameraSteepLookAtOffsetZ_ = 300.00f;
    this->CameraSteepPitch_ = -35.00f;
    this->CameraSteepDistance_ = 300.00f;
    this->CameraExtremeLookAtOffsetZ_ = 300.00f;
    this->CameraExtremePitch_ = -60.00f;
    this->CameraExtremeDistance_ = 550.00f;
    this->CameraGentrySteepPitchLerpTime_ = 2.00f;
    this->CameraGentrySteepDistanceLerpTime_ = 2.00f;
    this->CameraSteepExtremePitchLerpTime_ = 2.00f;
    this->CameraSteepExtremeDistanceLerpTime_ = 2.00f;
    this->EaseGentryDistance_ = 300.00f;
    this->EaseExtremeDownSlideDistance_ = 550.00f;
    this->EaseExtremeUpSlideDistance_ = 700.00f;
    this->EaseGentryPitch_ = 0.00f;
    this->EaseExtremeDownSlidePitch_ = -60.00f;
    this->EaseExtremeUpSlidePitch_ = 90.00f;
    this->EaseGentryLookAtOffsetZ_ = 150.00f;
    this->EaseExtremeDownSlideLookAtOffsetZ_ = 300.00f;
    this->EaseExtremeUpSlideLookAtOffsetZ_ = 100.00f;
    this->EaseOutExp = 2.00f;
    this->CameraMoveInterpolateSec_ = 0.80f;
    this->CameraMoveDelaySec_ = 0.12f;
    this->CameraMoveDelaySecInJumpArea_ = 0.00f;
    this->GroundCameraPitchDiffLimit = 8.00f;
    this->GroundCameraLookAtOffsetZDiffLimit = 16.00f;
    this->GroundCameraDistanceDiffLimit = 32.00f;
    this->CameraJumpPitch_ = -10.00f;
    this->CameraJumpPitchTime_ = 1.00f;
    this->CameraJumpDistance_ = 700.00f;
    this->CameraJumpDistanceLerpTime_ = 0.70f;
    this->CameraJumpFallTime_ = 0.80f;
    this->CameraJumpFallPitch_ = -50.00f;
    this->CameraJumpFallDistance_ = 400.00f;
    this->CameraJumpFallLerpTime_ = 4.50f;
    this->JumpDetermineDistance_ = 2000.00f;
    this->JumpSlideVectorScale_ = 1.00f;
    this->JumpRotationSpeed_ = 20.00f;
    this->JumpRotationLimit_ = 90.00f;
    this->JumpCameraRotationSpeed_ = 50.00f;
    this->JumpCameraRotationLimit_ = 15.00f;
    this->JumpVectorLerpTime_ = 10.00f;
    this->MaxJumpRotateInputSec_ = 3.00f;
    this->JumpFallVectorLerpTime_ = 5.00f;
    this->JumpRollLerpTime_ = 0.30f;
    this->GlidingFallSec_ = 5.00f;
    this->AirVectorLerpTime_ = 10.00f;
    this->AirFallVectorLerpTime_ = 5.00f;
    this->AirRollLerpTime_ = 0.70f;
    this->ShortJumpFloorDistance_ = 0.00f;
    this->ShortJumpVectorLerpTime_ = 0.70f;
    this->ShortJumpFallVectorScale_ = 3.00f;
    this->ShortJumpMinFallSpeed_ = 200.00f;
    this->AccelHightSmallJump_ = 980.00f;
    this->AirSpeedRate_ = 0.50f;
    this->MaxSpeedHightFall_ = 10000.00f;
    this->JumpDisableSec_ = 0.80f;
    this->JumpDisableAfterSmallSec_ = 0.50f;
    this->BrakeJumpBorderCos_ = -0.20f;
    this->DamagedFallSec_ = 0.50f;
    this->MinimumFallSpeed_ = -2000.00f;
    this->FallFloorRotSpeed_ = 0.30f;
    this->CameraJumpBigFallLoopPitch_ = -60.00f;
    this->CameraJumpBigFallLoopDistance_ = 550.00f;
    this->CameraJumpBigFallLookAtOffsetZ_ = 0.00f;
    this->CameraJumpBigFallLoopLerpTime_ = 4.50f;
    this->CameraJumpAirPitch_ = -60.00f;
    this->CameraJumpAirDistance_ = 550.00f;
    this->CameraJumpAirLookAtOffsetZ_ = 0.00f;
    this->CameraJumpAirLerpTime_ = 4.50f;
    this->CameraJumpAirFallTime_ = 0.80f;
    this->CameraIceRailPitch_ = -14.00f;
    this->CameraIceRailDistance_ = 250.00f;
    this->CameraIceRailLookAtOffsetZ_ = 300.00f;
    this->CameraIceRailLerpTime_ = 1.00f;
    this->CameraIceRailCtorBlendTime_ = 1.50f;
    this->CameraIceRailDtorBlendTime_ = 0.50f;
    this->CameraIceRailPositionLerpPer_ = 8.00f;
    this->CameraIceRailPositionLerpLimit_ = 50.00f;
    this->CameraDriftMaxDistance_ = 250.00f;
    this->CameraDriftMinDistance_ = 150.00f;
    this->CameraDriftLookAtOffsetZ_ = 150.00f;
    this->CameraDriftLookAtOffsetY_ = 200.00f;
    this->CameraDriftLookAtOffsetYStartRate_ = 0.40f;
    this->CameraDriftLerpTime_ = 0.50f;
    this->IceRailCameraType = IRCT_Use_Rail;
    this->bPreInitializeCamera_ = true;
    this->bUseOldUpdateCamera_ = false;
    this->IsChangeLandingCamera_ = true;
    this->CameraLandingPitch_ = -15.00f;
    this->CameraLandingDistance_ = 350.00f;
    this->CameraLandingLookAtOffsetZ_ = 100.00f;
    this->CameraLandingLerpTime_ = 0.20f;
    this->CameraLandingCameraTime_ = 0.60f;
    this->LeftScaleParam_ = 0.00f;
    this->RightScaleParam_ = 0.00f;
    this->SlideEffect_ = NULL;
    this->SlideRotationEffect_ = NULL;
    this->WallHitEffect_ = NULL;
    this->WindEffect_ = NULL;
    this->JumpLandEffect_ = NULL;
    this->ShortJumpLandEffect_ = NULL;
    this->IceRailSlideAura_ = NULL;
    this->WheelTrackEffect_ = NULL;
    this->SlideEffectIce_ = NULL;
    this->Camera_ = NULL;
    this->DriftBrakingSec_ = 0.75f;
    this->DriftInputRotVelocity_ = 60.00f;
    this->DriftGravityRotVelocity_ = 120.00f;
    this->DriftFinishCosThreshold_ = 0.97f;
    this->DriftStartableMinSpeedRate_ = 0.40f;
    this->DriftStartableInputRate_ = 0.60f;
    this->DriftStartRotationRange_ = 15.00f;
    this->DriftEffectPerSec_ = 4.00f;
    this->EventCutFlag_ = false;
    this->m_bJumpAfterIceRail_ = false;
    this->m_bPrecedeAttachSnowTail_ = false;
    this->m_bEnableEquipmentSnowDepth_ = false;
    this->EnableLandingDrift_ = true;
    this->enableJumpCameraControl_ = false;
    this->enableSlideCameraControl_ = false;
    this->m_bMouseDebugInfo = false;
    this->enableJumpAreaCameraCollision_ = false;
    this->UseLLandAfterDamage_ = true;
    this->UseRollLanding_ = true;
    this->UseDamageRotateInterp_ = true;
    this->DisableInputJump_ = false;
}

