#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "EIceRaileCameraType.h"
#include "Engine/EngineTypes.h"
#include "TresFriendLinkPawnSnowCurling.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresCameraSnowCurling;
class UTresFieldVoice;
class AActor;

UCLASS()
class ATresFriendLinkPawnSnowCurling : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Speed_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SpeedRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FirstSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RestartSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelSpeedHitting_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelSpeedRestart_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnAngleHitting_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnAngleRestart_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeDecelerationPich_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopeDeceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeedHitting_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLimit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRotateInputSec_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentRotation_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CorrectVectorPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CorrectVectorRoll_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteepPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtremePitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityAccelRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitSpeedDelayTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitSpeedRestartTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitUncontrollableTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitContinuousHitPrevetionTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitKnockBackTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitAirKnockBackTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitKnockBackAngle_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitNormalReflect_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallRockUpCos_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallRockHitVeloCos_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallRockRaiseBorder_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallRideCos_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallFallCheckDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallFallDownRate_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SpeedDelayTimer_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SpeedRestartTimer_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlopeInclination_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendParamRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DamageHitBig_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IgnoreIceRailJumpSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IgnoreIceRailShortJumpSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IgnoreIceRailAirSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartableIceRailRange_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartableMove2IceRail_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartableIceRailUnderLoc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraGentryLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraGentryPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraGentryDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraSteepLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraSteepPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraSteepDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraExtremeLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraExtremePitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraExtremeDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraGentrySteepPitchLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraGentrySteepDistanceLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraSteepExtremePitchLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraSteepExtremeDistanceLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseGentryDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeDownSlideDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeUpSlideDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseGentryPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeDownSlidePitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeUpSlidePitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseGentryLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeDownSlideLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseExtremeUpSlideLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseOutExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraMoveInterpolateSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraMoveDelaySec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraMoveDelaySecInJumpArea_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundCameraPitchDiffLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundCameraLookAtOffsetZDiffLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundCameraDistanceDiffLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpPitchTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpDistanceLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpFallTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpFallPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpFallDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpFallLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpDetermineDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpSlideVectorScale_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpRotationSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpRotationLimit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpCameraRotationSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpCameraRotationLimit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxJumpRotateInputSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpFallVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpRollLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlidingFallSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirFallVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirRollLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortJumpFloorDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortJumpVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortJumpFallVectorScale_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortJumpMinFallSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AccelHightSmallJump_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirSpeedRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeedHightFall_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpDisableSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpDisableAfterSmallSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakeJumpBorderCos_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamagedFallSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumFallSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FallFloorRotSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpBigFallLoopPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpBigFallLoopDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpBigFallLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpBigFallLoopLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpAirPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpAirDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpAirLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpAirLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraJumpAirFallTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailCtorBlendTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailDtorBlendTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailPositionLerpPer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraIceRailPositionLerpLimit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftMaxDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftMinDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftLookAtOffsetY_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftLookAtOffsetYStartRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDriftLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EIceRaileCameraType> IceRailCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPreInitializeCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseOldUpdateCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsChangeLandingCamera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLandingPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLandingDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLandingLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLandingLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLandingCameraTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftScaleParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightScaleParam_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector BaseDir_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ShortJumpDownForce_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SnowTailAttachOffset_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SlideEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SlideRotationEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WallHitEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WindEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* JumpLandEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ShortJumpLandEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* IceRailSlideAura_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WheelTrackEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SlideEffectIce_;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UParticleSystemComponent> SlideRotationParticleSystemComponent_;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATresCameraSnowCurling* Camera_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftBrakingSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftInputRotVelocity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftGravityRotVelocity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftFinishCosThreshold_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftStartableMinSpeedRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftStartableInputRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftStartRotationRange_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DriftEffectPerSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> RestartVoices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> LandingVoices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EventCutFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bJumpAfterIceRail_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bPrecedeAttachSnowTail_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableEquipmentSnowDepth_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableLandingDrift_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enableJumpCameraControl_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enableSlideCameraControl_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bMouseDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enableJumpAreaCameraCollision_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLLandAfterDamage_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseRollLanding_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseDamageRotateInterp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableInputJump_;
    
    ATresFriendLinkPawnSnowCurling();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateSpeed();
    
    UFUNCTION(BlueprintNativeEvent)
    void UpdateRotationScale();
    
    UFUNCTION(BlueprintNativeEvent)
    void UpdateCamera(bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SnowCurlingSetDirectionalBox(AActor* inActor, bool bPriorityHigh);
    
    UFUNCTION(BlueprintCallable)
    void SnowCurlingSetBigJumpArea(bool inArea);
    
    UFUNCTION(BlueprintCallable)
    void SnowCurlingRequestFixBigJump();
    
    UFUNCTION(BlueprintCallable)
    void SnowCurlingRemoveDirectionalBox(AActor* inActor, bool bPriorityHigh);
    
    UFUNCTION(BlueprintCallable)
    bool SnowCurlingPreGoalEnd();
    
    UFUNCTION(BlueprintCallable)
    bool SnowCurlingPreGoalBegin(float pitchDegree, float targetOffsetZ, float Distance, FVector goalPosition, bool useGoal);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetupCamera();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSnowCurlingDamage(EPhysicalSurface surfType);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHit(EPhysicalSurface surfType);
    
    UFUNCTION(BlueprintPure)
    float GetShortJumpFloorPitch() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void EndShortJump();
    
    UFUNCTION(BlueprintNativeEvent)
    void EndJump();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginShortJump();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginJump();
    
};

