#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "TresMovementComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "TresRailSlideWork.h"
#include "AI/RVOAvoidanceInterface.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimationAsset.h"
#include "Engine/EngineTypes.h"
#include "TresCharMovementComponent.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class UTresSwimRingComponent;
class AActor;
class ATresPawnBase;
class UNavigationQueryFilter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresCharMovementComponent : public UTresMovementComponentBase, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnorePhysObjStepUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpZVelocity;
    
private:
    UPROPERTY(EditAnywhere)
    float WalkableFloorAngle;
    
    UPROPERTY(VisibleAnywhere)
    float WalkableFloorZ;
    
public:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 CustomMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSwimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideMaxFallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCustomMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bUseSeparateBrakingFriction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FallingLateralFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIsSwimSurface: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SwimSurfaceToDiveVelZ;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SwimSurfaceOffset;
    
    UPROPERTY(Export, Transient)
    UTresSwimRingComponent* m_pSwimRing;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SwimRingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SwimRingGravity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SwimRingVelMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PerchRadiusThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float PerchAdditionalHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float FallingPerchAdditionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseControllerDesiredRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOrientRotationToMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAddFullVelocityToRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bEnableRootScaleRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bBodyCollPushVectorConstraintXY: 1;
    
protected:
    UPROPERTY()
    uint8 bMovementInProgress: 1;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bEnableScopedMovementUpdates: 1;
    
    UPROPERTY()
    uint8 bForceMaxAccel: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bRunPhysicsWithNoController: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleInstanceOnly)
    uint8 bForceNextFloorCheck: 1;
    
    UPROPERTY()
    uint8 bShrinkProxyCapsule: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanWalkOffLedges: 1;
    
    UPROPERTY()
    uint8 bDeferUpdateMoveComponent: 1;
    
    UPROPERTY(Export)
    USceneComponent* DeferredUpdatedMoveComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxOutOfWaterStepHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OutofWaterZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePhysicsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTouchForceScaledToMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPushForceScaledToMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bScalePushForceToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StandingDownwardForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialPushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushForcePointZOffsetFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TouchForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RepulsionForce;
    
    UPROPERTY()
    uint8 bForceBraking: 1;
    
protected:
    UPROPERTY()
    FVector Acceleration;
    
    UPROPERTY()
    FVector LastUpdateLocation;
    
    UPROPERTY()
    FVector LastUpdateVelocity;
    
    UPROPERTY()
    FVector PendingImpulseToApply;
    
    UPROPERTY()
    FVector PendingForceToApply;
    
    UPROPERTY()
    float AnalogInputModifier;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MaxSimulationTimeStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 MaxSimulationIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float LedgeCheckThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float JumpOutOfWaterPitch;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FFindFloorResult CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> DefaultLandMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
    
private:
    UPROPERTY(Transient)
    TEnumAsByte<EMovementMode> GroundMovementMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMaintainHorizontalGroundVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseVelocityZ: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpartBaseAngularVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnorePhysBaseImpartVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    uint8 bJustTeleported: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNotifyApex: 1;
    
    UPROPERTY()
    uint8 bCheatFlying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreBaseRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bApplyBaseRotationOnlyYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnorePhysBaseRotation: 1;
    
    UPROPERTY()
    uint8 bFastAttachedMove: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bAlwaysCheckFloor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseFlatBaseForFloorChecks: 1;
    
    UPROPERTY()
    uint8 bWantsToLeaveNavWalking: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseRVOAvoidance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bRequestedMoveUseAcceleration: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseNavWalkingMode: 1;
    
    UPROPERTY(Transient)
    uint8 bHasRequestedVelocity: 1;
    
    UPROPERTY(Transient)
    uint8 bRequestedMoveWithMaxSpeed: 1;
    
    UPROPERTY(Transient)
    uint8 bWasAvoidanceUpdated: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bProjectNavMeshWalking: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bProjectNavMeshOnBothWorldChannels: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(Transient)
    FVector RequestedVelocity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceWeight;
    
    UPROPERTY()
    FVector PendingLaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionInterval;
    
    UPROPERTY(Transient)
    float NavMeshProjectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionHeightScaleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionHeightScaleDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bNeedFallTravelCheck: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 m_bCheckEdgeFloat: 1;
    
    UPROPERTY(Transient)
    FRootMotionMovementParams RootMotionParams;
    
    UPROPERTY()
    uint8 bComputeEncroachCheck: 1;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    FTresRailSlideWork m_RailSlideWork;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnoreWaterCurrentForce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnoreOverlappedForceOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bIgnoreOverlappedForceInSky: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDisableMoveOnSpawnFrame: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpUpGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxJumpDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpDurationGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableAutoChangeSwimMoveMode: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bLocomotionRootMotionDeltaCustom: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AverageDirectionInterpolationTime;
    
    UTresCharMovementComponent();
protected:
    UFUNCTION()
    void UpdatedComponentEndOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void UpdatedComponentBeginOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWalkMode(bool InNewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorZ(float InWalkableFloorZ);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpDuration(bool bFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnore(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoid(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroup(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceEnabled(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    float K2_GetWalkableFloorZ() const;
    
    UFUNCTION(BlueprintPure)
    float K2_GetWalkableFloorAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsWalkable(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnderWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumpDurationFinish() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDisableAutoUpdateVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintPure)
    float GetVelocityXYSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetValidPerchRadius() const;
    
    UFUNCTION(BlueprintPure)
    ATresPawnBase* GetTresPawnOwner() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeMoving();
    
    UFUNCTION(BlueprintPure)
    float GetTimeMotionless();
    
    UFUNCTION(BlueprintPure)
    float GetPerchRadiusThreshold() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetMovementBase() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovedVelocityXYSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxJumpHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsWalkMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsRunMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetImpartedMovementBaseVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFloorFollowPosition(FVector& Result, const AActor* FollowActor, TSubclassOf<UNavigationQueryFilter> FilterClass, float ProjectionDistance);
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAverageInterpolatedVelocity();
    
    UFUNCTION(BlueprintPure)
    FVector GetAverageInterpolatedDirection();
    
    UFUNCTION(BlueprintPure)
    float GetAnalogInputModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetAccelerationZ() const;
    
    UFUNCTION(BlueprintPure)
    float GetAccelerationXYSize() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableMovement();
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoUpdateVelocity(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void ClearAccumulatedForces();
    
protected:
    UFUNCTION()
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVelocity(const FVector& InTarget, float inMinHeight, float inMaxHeight);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVector(const FVector& InTarget, float inAngle);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityZ(float InVelocityZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityXY(FVector InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocity(FVector InVelocity);
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetMovedVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector BP_GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocityZ();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocityXY();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocity();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force);
    
    void SetRVOAvoidanceUID(int32 UID);

    int32 GetRVOAvoidanceUID();

    void SetRVOAvoidanceWeight(float Weight);

    float GetRVOAvoidanceWeight();

    FVector GetRVOAvoidanceOrigin();

    float GetRVOAvoidanceRadius();

    float GetRVOAvoidanceHeight();

    float GetRVOAvoidanceConsiderationRadius();

    FVector GetVelocityForRVOConsideration();

    int32 GetAvoidanceGroupMask();

    int32 GetGroupsToAvoidMask();

    int32 GetGroupsToIgnoreMask();
    
    // Fix for true pure virtual functions not being implemented
};

