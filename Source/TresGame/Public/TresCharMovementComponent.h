// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresMovementComponentBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "TresCharMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TRESGAME_API UTresCharMovementComponent : public UTresMovementComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float GravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxStepHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnorePhysObjStepUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float JumpZVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float WalkableFloorAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float WalkableFloorZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	TEnumAsByte<EMovementMode> MovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	uint8 CustomMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float GroundFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxSwimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxFlySpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float OverrideMaxFallingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxCustomMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float WalkSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingFrictionFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bUseSeparateBrakingFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingDecelerationWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingDecelerationFalling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingDecelerationSwimming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float BrakingDecelerationFlying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float AirControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float FallingLateralFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float Buoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIsSwimSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_SwimSurfaceToDiveVelZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_SwimSurfaceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	class UTresSwimRingComponent* m_pSwimRing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_SwimRingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_SwimRingGravity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_SwimRingVelMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float PerchRadiusThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float PerchAdditionalHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float FallingPerchAdditionalHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FRotator RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bUseControllerDesiredRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bOrientRotationToMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bAddFullVelocityToRootMotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bEnableRootScaleRootMotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bBodyCollPushVectorConstraintXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bMovementInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bEnableScopedMovementUpdates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bForceMaxAccel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bRunPhysicsWithNoController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bForceNextFloorCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bShrinkProxyCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bCanWalkOffLedges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bDeferUpdateMoveComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	class USceneComponent* DeferredUpdatedMoveComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxOutOfWaterStepHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float OutofWaterZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float Mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bEnablePhysicsInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bTouchForceScaledToMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bPushForceScaledToMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bScalePushForceToVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float StandingDownwardForceScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float InitialPushForceFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float PushForceFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float PushForcePointZOffsetFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float TouchForceFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MinTouchForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxTouchForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float RepulsionForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bForceBraking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector Acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector LastUpdateLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector LastUpdateVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector PendingImpulseToApply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector PendingForceToApply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float AnalogInputModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float MaxSimulationTimeStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	int MaxSimulationIterations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float LedgeCheckThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float JumpOutOfWaterPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	struct FFindFloorResult CurrentFloor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	TEnumAsByte<EMovementMode> DefaultLandMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	TEnumAsByte<EMovementMode> DefaultWaterMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	TEnumAsByte<EMovementMode> GroundMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bMaintainHorizontalGroundVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bImpartBaseVelocityX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bImpartBaseVelocityY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bImpartBaseVelocityZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bImpartBaseAngularVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnorePhysBaseImpartVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bJustTeleported;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bNotifyApex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bCheatFlying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bIgnoreBaseRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bApplyBaseRotationOnlyYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnorePhysBaseRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bFastAttachedMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bAlwaysCheckFloor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bUseFlatBaseForFloorChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bWantsToLeaveNavWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bUseRVOAvoidance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bRequestedMoveUseAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bUseNavWalkingMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bHasRequestedVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bRequestedMoveWithMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bWasAvoidanceUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bProjectNavMeshWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bProjectNavMeshOnBothWorldChannels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float AvoidanceConsiderationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector RequestedVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	int AvoidanceUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	struct FNavAvoidanceMask AvoidanceGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	struct FNavAvoidanceMask GroupsToAvoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	struct FNavAvoidanceMask GroupsToIgnore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float AvoidanceWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	FVector PendingLaunchVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float NavMeshProjectionInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float NavMeshProjectionTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float NavMeshProjectionInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float NavMeshProjectionHeightScaleUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float NavMeshProjectionHeightScaleDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bNeedFallTravelCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bCheckEdgeFloat;

	struct FRootMotionMovementParams RootMotionParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool bComputeEncroachCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	struct FTresRailSlideWork m_RailSlideWork;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnoreWaterCurrentForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnoreOverlappedForceOnGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bIgnoreOverlappedForceInSky;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bDisableMoveOnSpawnFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_JumpUpGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_MaxJumpDurationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_JumpDurationGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bDisableAutoChangeSwimMoveMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	bool m_bLocomotionRootMotionDeltaCustom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharMovementComponent")
	float m_AverageDirectionInterpolationTime;

	//UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	//void UpdatedComponentEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};

	//UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	//void UpdatedComponentBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetWalkMode(bool InNewMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetWalkableFloorZ(float InWalkableFloorZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetWalkableFloorAngle(float InWalkableFloorAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetJumpDuration(bool bFinish) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetGroupsToIgnore(int GroupFlags) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetGroupsToAvoid(int GroupFlags) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetEnableGravity(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetAvoidanceGroup(int GroupFlags) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void SetAvoidanceEnabled(bool bEnable) {};

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetWalkableFloorZ() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetWalkableFloorAngle() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool IsWalking() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool IsWalkable(const struct FHitResult& Hit) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool IsUnderWater() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool IsJumpDurationFinish() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool IsDisableAutoUpdateVelocity() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetVelocityZ() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetVelocityXYSize() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetValidPerchRadius() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	class ATresPawnBase* GetTresPawnOwner() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetTimeMoving() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetTimeMotionless() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetPerchRadiusThreshold() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	class UPrimitiveComponent* GetMovementBase() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetMovedVelocityXYSize() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetMaxJumpHeight() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetMaxAcceleration() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool GetIsWalkMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool GetIsRunMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector GetImpartedMovementBaseVelocity() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	bool GetFloorFollowPosition(class AActor* FollowActor, class UClass* FilterClass, float ProjectionDistance, struct FVector& Result) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector GetCurrentAcceleration() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector GetAverageInterpolatedVelocity() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector GetAverageInterpolatedDirection() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetAnalogInputModifier() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetAccelerationZ() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	float GetAccelerationXYSize() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void DisableMovement() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void DisableAutoUpdateVelocity(bool bInDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void ClearAccumulatedForces() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	FVector CalcJumpVelocity(const struct FVector& InTarget, float inMinHeight, float inMaxHeight) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	FVector CalcJumpVector(const struct FVector& InTarget, float inAngle) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_RequestDirectVelocityZ(float InVelocityZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_RequestDirectVelocityXY(const struct FVector& InVelocity) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_RequestDirectVelocity(const struct FVector& InVelocity) {};

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector BP_GetVelocity() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector BP_GetMovedVelocity() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharMovementComponent")
	FVector BP_GetAcceleration() { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_ClearRequestDirectVelocityZ() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_ClearRequestDirectVelocityXY() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void BP_ClearRequestDirectVelocity() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharMovementComponent")
	void AddForce(const struct FVector& Force) {};
};