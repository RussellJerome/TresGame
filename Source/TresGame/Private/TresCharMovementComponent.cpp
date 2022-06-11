#include "TresCharMovementComponent.h"
#include "Components/PrimitiveComponent.h"
#include "AI/Navigation/NavigationSystem.h"
#include "UObject/Package.h"
#include "Components/SkeletalMeshComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class ATresPawnBase;
class UPrimitiveComponent;
class UNavigationQueryFilter;

void UTresCharMovementComponent::UpdatedComponentEndOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTresCharMovementComponent::UpdatedComponentBeginOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTresCharMovementComponent::SetWalkMode(bool InNewMode) {
}

void UTresCharMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ) {
    WalkableFloorZ = FMath::Clamp(InWalkableFloorZ, 0.f, 1.f);
    WalkableFloorAngle = FMath::RadiansToDegrees(FMath::Acos(WalkableFloorZ));
}

void UTresCharMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle) {
}

void UTresCharMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode) {
}

void UTresCharMovementComponent::SetJumpDuration(bool bFinish) {
}

void UTresCharMovementComponent::SetGroupsToIgnore(int32 GroupFlags) {
}

void UTresCharMovementComponent::SetGroupsToAvoid(int32 GroupFlags) {
}

void UTresCharMovementComponent::SetEnableGravity(bool InEnable) {
}

void UTresCharMovementComponent::SetAvoidanceGroup(int32 GroupFlags) {
}

void UTresCharMovementComponent::SetAvoidanceEnabled(bool bEnable) {
}

float UTresCharMovementComponent::K2_GetWalkableFloorZ() const {
    return 0.0f;
}

float UTresCharMovementComponent::K2_GetWalkableFloorAngle() const {
    return 0.0f;
}

bool UTresCharMovementComponent::IsWalking() const {
    return false;
}

bool UTresCharMovementComponent::IsWalkable(const FHitResult& Hit) const {
    return false;
}

bool UTresCharMovementComponent::IsUnderWater() const {
    return false;
}

bool UTresCharMovementComponent::IsJumpDurationFinish() const {
    return false;
}

bool UTresCharMovementComponent::IsDisableAutoUpdateVelocity() const {
    return false;
}

float UTresCharMovementComponent::GetVelocityZ() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetVelocityXYSize() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetValidPerchRadius() const {
    return 0.0f;
}

ATresPawnBase* UTresCharMovementComponent::GetTresPawnOwner() const {
    return CharacterOwner;
}

float UTresCharMovementComponent::GetTimeMoving() {
    return 0.0f;
}

float UTresCharMovementComponent::GetTimeMotionless() {
    return 0.0f;
}

float UTresCharMovementComponent::GetPerchRadiusThreshold() const {
    return 0.0f;
}

UPrimitiveComponent* UTresCharMovementComponent::GetMovementBase() const {
    return NULL;
}

float UTresCharMovementComponent::GetMovedVelocityXYSize() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetMaxJumpHeight() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetMaxAcceleration() const {
    return 0.0f;
}

bool UTresCharMovementComponent::GetIsWalkMode() const {
    return false;
}

bool UTresCharMovementComponent::GetIsRunMode() const {
    return false;
}

FVector UTresCharMovementComponent::GetImpartedMovementBaseVelocity() const {
    return FVector{};
}

bool UTresCharMovementComponent::GetFloorFollowPosition(FVector& Result, const AActor* FollowActor, TSubclassOf<UNavigationQueryFilter> FilterClass, float ProjectionDistance) {
    return false;
}

FVector UTresCharMovementComponent::GetCurrentAcceleration() const {
    return FVector{};
}

FVector UTresCharMovementComponent::GetAverageInterpolatedVelocity() {
    return FVector{};
}

FVector UTresCharMovementComponent::GetAverageInterpolatedDirection() {
    return FVector{};
}

float UTresCharMovementComponent::GetAnalogInputModifier() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetAccelerationZ() const {
    return 0.0f;
}

float UTresCharMovementComponent::GetAccelerationXYSize() const {
    return 0.0f;
}

void UTresCharMovementComponent::DisableMovement() {
}

void UTresCharMovementComponent::DisableAutoUpdateVelocity(bool bInDisable) {
}

void UTresCharMovementComponent::ClearAccumulatedForces() {
}

void UTresCharMovementComponent::CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UTresCharMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) {
}

FVector UTresCharMovementComponent::CalcJumpVelocity(const FVector& InTarget, float inMinHeight, float inMaxHeight) {
    return FVector{};
}

FVector UTresCharMovementComponent::CalcJumpVector(const FVector& InTarget, float inAngle) {
    return FVector{};
}

void UTresCharMovementComponent::BP_RequestDirectVelocityZ(float InVelocityZ) {
}

void UTresCharMovementComponent::BP_RequestDirectVelocityXY(FVector InVelocity) {
}

void UTresCharMovementComponent::BP_RequestDirectVelocity(FVector InVelocity) {
}

FVector UTresCharMovementComponent::BP_GetVelocity() const {
    return FVector{};
}

FVector UTresCharMovementComponent::BP_GetMovedVelocity() const {
    return FVector{};
}

FVector UTresCharMovementComponent::BP_GetAcceleration() const {
    return FVector{};
}

void UTresCharMovementComponent::BP_ClearRequestDirectVelocityZ() {
}

void UTresCharMovementComponent::BP_ClearRequestDirectVelocityXY() {
}

void UTresCharMovementComponent::BP_ClearRequestDirectVelocity() {
}

void UTresCharMovementComponent::AddImpulse(FVector Impulse, bool bVelocityChange) {
}

void UTresCharMovementComponent::AddForce(FVector Force) {
}

void UTresCharMovementComponent::SetRVOAvoidanceUID(int32 UID)
{
}

int32 UTresCharMovementComponent::GetRVOAvoidanceUID()
{
    return 0;
}

void UTresCharMovementComponent::SetRVOAvoidanceWeight(float Weight)
{
}

float UTresCharMovementComponent::GetRVOAvoidanceWeight()
{
    return 0.f;
}
	
FVector UTresCharMovementComponent::GetRVOAvoidanceOrigin()
{
    return FVector(0);
}
	
float UTresCharMovementComponent::GetRVOAvoidanceRadius()
{
    return 0.f;
}
	
float UTresCharMovementComponent::GetRVOAvoidanceHeight()
{
    return 0.f;
}
	
float UTresCharMovementComponent::GetRVOAvoidanceConsiderationRadius()
{
    return 0.f;
}
	
FVector UTresCharMovementComponent::GetVelocityForRVOConsideration()
{
    return FVector(0);
}
	
int32 UTresCharMovementComponent::GetAvoidanceGroupMask()
{
    return 0;
}
	
int32 UTresCharMovementComponent::GetGroupsToAvoidMask()
{
    return 0;
}
	
int32 UTresCharMovementComponent::GetGroupsToIgnoreMask()
{
    return 0;
}

void UTresCharMovementComponent::PostPhysicsTickComponent(float DeltaTime, FTresMovementComponentPostPhysicsTickFunction& ThisTickFunction)
{
	if (bDeferUpdateMoveComponent)
	{
		FScopedMovementUpdate ScopedMovementUpdate(UpdatedComponent, bEnableScopedMovementUpdates ? EScopedUpdate::DeferredUpdates : EScopedUpdate::ImmediateUpdates);
	}
}




UTresCharMovementComponent::UTresCharMovementComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	/*
	GravityScale = 1.00f;
    MaxStepHeight = 45.00f;
    m_bIgnorePhysObjStepUp = true;
    JumpZVelocity = 420.00f;
    WalkableFloorAngle = 49.00f;
    WalkableFloorZ = 0.66f;
    MovementMode = MOVE_None;
    CustomMovementMode = 0;
    GroundFriction = 8.00f;
    MaxWalkSpeed = 600.00f;
    MaxSwimSpeed = 300.00f;
    MaxFlySpeed = 600.00f;
    OverrideMaxFallingSpeed = 0.00f;
    MaxCustomMovementSpeed = 600.00f;
    MaxAcceleration = 2048.00f;
    WalkSpeedRate = 1.00f;
    BrakingFrictionFactor = 2.00f;
    BrakingFriction = 0.00f;
    bUseSeparateBrakingFriction = false;
    BrakingDecelerationWalking = MaxAcceleration;
    BrakingDecelerationFalling = 0.00f;
    BrakingDecelerationSwimming = 0.00f;
    BrakingDecelerationFlying = 0.00f;
    AirControl = 0.05f;
    FallingLateralFriction = 0.00f;
    Buoyancy = 1.00f;
    m_bIsSwimSurface = false;
    m_SwimSurfaceToDiveVelZ = -1500.00f;
    m_SwimSurfaceOffset = 50.00f;
    m_pSwimRing = NULL;
    m_SwimRingRadius = 50.00f;
    m_SwimRingGravity = 100.00f;
    m_SwimRingVelMax = 100.00f;
    PerchRadiusThreshold = 0.00f;
    PerchAdditionalHeight = 0.00f;
    FallingPerchAdditionalHeight = 0.00f;
    bUseControllerDesiredRotation = false;
    bOrientRotationToMovement = false;
    m_bAddFullVelocityToRootMotion = true;
    m_bEnableRootScaleRootMotion = false;
    m_bBodyCollPushVectorConstraintXY = false;
    bMovementInProgress = false;
    bEnableScopedMovementUpdates = true;
    bForceMaxAccel = false;
    bRunPhysicsWithNoController = false;
    bForceNextFloorCheck = true;
    bShrinkProxyCapsule = true;
    bCanWalkOffLedges = true;
    bDeferUpdateMoveComponent = false;
    DeferredUpdatedMoveComponent = NULL;
    MaxOutOfWaterStepHeight = 40.00f;
    OutofWaterZ = 420.00f;
    Mass = 100.00f;
    bEnablePhysicsInteraction = true;
    bTouchForceScaledToMass = true;
    bPushForceScaledToMass = false;
    bScalePushForceToVelocity = true;
    StandingDownwardForceScale = 0.00f;
    InitialPushForceFactor = 5.00f;
    PushForceFactor = 10000.00f;
    PushForcePointZOffsetFactor = -0.75f;
    TouchForceFactor = 1.00f;
    MinTouchForce = -1.00f;
    MaxTouchForce = 250.00f;
    RepulsionForce = 2.50f;
    bForceBraking = false;
    AnalogInputModifier = 0.00f;
    MaxSimulationTimeStep = 0.10f;
    MaxSimulationIterations = 4;
    LedgeCheckThreshold = 4.00f;
    JumpOutOfWaterPitch = 11.25f;
    DefaultLandMovementMode = MOVE_Walking;
    DefaultWaterMovementMode = MOVE_Swimming;
    GroundMovementMode = MOVE_Walking;
    bMaintainHorizontalGroundVelocity = true;
    bImpartBaseVelocityX = true;
    bImpartBaseVelocityY = true;
    bImpartBaseVelocityZ = true;
    bImpartBaseAngularVelocity = true;
    m_bIgnorePhysBaseImpartVelocity = true;
    bJustTeleported = true;
    bNotifyApex = false;
    bCheatFlying = false;
    bIgnoreBaseRotation = false;
    m_bApplyBaseRotationOnlyYaw = true;
    m_bIgnorePhysBaseRotation = true;
    bFastAttachedMove = false;
    bAlwaysCheckFloor = true;
    bUseFlatBaseForFloorChecks = false;
    bWantsToLeaveNavWalking = false;
    bUseRVOAvoidance = false;
    bRequestedMoveUseAcceleration = true;
    bUseNavWalkingMode = false;
    bHasRequestedVelocity = false;
    bRequestedMoveWithMaxSpeed = false;
    bWasAvoidanceUpdated = false;
    bProjectNavMeshWalking = false;
    bProjectNavMeshOnBothWorldChannels = false;
    AvoidanceConsiderationRadius = 500.00f;
    AvoidanceUID = 0;
    AvoidanceWeight = 1.00f;
    NavMeshProjectionInterval = 0.10f;
    NavMeshProjectionTimer = 0.00f;
    NavMeshProjectionInterpSpeed = 12.00f;
    NavMeshProjectionHeightScaleUp = 0.67f;
    NavMeshProjectionHeightScaleDown = 1.00f;
    m_bNeedFallTravelCheck = false;
    m_bCheckEdgeFloat = true;
    bComputeEncroachCheck = false;
    m_bIgnoreWaterCurrentForce = false;
    m_bIgnoreOverlappedForceOnGround = false;
    m_bIgnoreOverlappedForceInSky = false;
    m_bDisableMoveOnSpawnFrame = false;
    m_JumpUpGravityScale = 1.00f;
    m_MaxJumpDurationTime = 0.00f;
    m_JumpDurationGravityScale = 1.00f;
    m_bDisableAutoChangeSwimMoveMode = true;
    m_bLocomotionRootMotionDeltaCustom = false;
    m_AverageDirectionInterpolationTime = 3.00f;
    */
	
	
	/*m_PostPhysicsTickFunction.bCanEverTick = true;
	m_PostPhysicsTickFunction.bStartWithTickEnabled = false;
	m_PostPhysicsTickFunction.TickGroup = TG_PostPhysics;
    
	SetWalkableFloorZ(0.71f);

	// default character can jump, walk, and swim
	NavAgentProps.bCanJump = true;
	NavAgentProps.bCanWalk = true;
	NavAgentProps.bCanSwim = true;
	ResetMoveState();
    
	AvoidanceGroup.bGroup0 = true;
	GroupsToAvoid.Packed = 0xFFFFFFFF;
	GroupsToIgnore.Packed = 0;
	AvoidanceConsiderationRadius = 500.0f;*/
}

