#include "TresCharMovementComponent.h"
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
    return NULL;
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

UTresCharMovementComponent::UTresCharMovementComponent() {
    this->GravityScale = 1.00f;
    this->MaxStepHeight = 45.00f;
    this->m_bIgnorePhysObjStepUp = true;
    this->JumpZVelocity = 420.00f;
    this->WalkableFloorAngle = 49.00f;
    this->WalkableFloorZ = 0.66f;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = 0;
    this->GroundFriction = 8.00f;
    this->MaxWalkSpeed = 600.00f;
    this->MaxSwimSpeed = 300.00f;
    this->MaxFlySpeed = 600.00f;
    this->OverrideMaxFallingSpeed = 0.00f;
    this->MaxCustomMovementSpeed = 600.00f;
    this->MaxAcceleration = 2048.00f;
    this->WalkSpeedRate = 1.00f;
    this->BrakingFrictionFactor = 2.00f;
    this->BrakingFriction = 0.00f;
    this->bUseSeparateBrakingFriction = false;
    this->BrakingDecelerationWalking = 2048.00f;
    this->BrakingDecelerationFalling = 0.00f;
    this->BrakingDecelerationSwimming = 0.00f;
    this->BrakingDecelerationFlying = 0.00f;
    this->AirControl = 0.05f;
    this->FallingLateralFriction = 0.00f;
    this->Buoyancy = 1.00f;
    this->m_bIsSwimSurface = false;
    this->m_SwimSurfaceToDiveVelZ = -1500.00f;
    this->m_SwimSurfaceOffset = 50.00f;
    this->m_pSwimRing = NULL;
    this->m_SwimRingRadius = 50.00f;
    this->m_SwimRingGravity = 100.00f;
    this->m_SwimRingVelMax = 100.00f;
    this->PerchRadiusThreshold = 0.00f;
    this->PerchAdditionalHeight = 0.00f;
    this->FallingPerchAdditionalHeight = 0.00f;
    this->bUseControllerDesiredRotation = false;
    this->bOrientRotationToMovement = false;
    this->m_bAddFullVelocityToRootMotion = true;
    this->m_bEnableRootScaleRootMotion = false;
    this->m_bBodyCollPushVectorConstraintXY = false;
    this->bMovementInProgress = false;
    this->bEnableScopedMovementUpdates = true;
    this->bForceMaxAccel = false;
    this->bRunPhysicsWithNoController = false;
    this->bForceNextFloorCheck = true;
    this->bShrinkProxyCapsule = true;
    this->bCanWalkOffLedges = true;
    this->bDeferUpdateMoveComponent = false;
    this->DeferredUpdatedMoveComponent = NULL;
    this->MaxOutOfWaterStepHeight = 40.00f;
    this->OutofWaterZ = 420.00f;
    this->Mass = 100.00f;
    this->bEnablePhysicsInteraction = true;
    this->bTouchForceScaledToMass = true;
    this->bPushForceScaledToMass = false;
    this->bScalePushForceToVelocity = true;
    this->StandingDownwardForceScale = 0.00f;
    this->InitialPushForceFactor = 5.00f;
    this->PushForceFactor = 10000.00f;
    this->PushForcePointZOffsetFactor = -0.75f;
    this->TouchForceFactor = 1.00f;
    this->MinTouchForce = -1.00f;
    this->MaxTouchForce = 250.00f;
    this->RepulsionForce = 2.50f;
    this->bForceBraking = false;
    this->AnalogInputModifier = 0.00f;
    this->MaxSimulationTimeStep = 0.10f;
    this->MaxSimulationIterations = 4;
    this->LedgeCheckThreshold = 4.00f;
    this->JumpOutOfWaterPitch = 11.25f;
    this->DefaultLandMovementMode = MOVE_Walking;
    this->DefaultWaterMovementMode = MOVE_Swimming;
    this->GroundMovementMode = MOVE_Walking;
    this->bMaintainHorizontalGroundVelocity = true;
    this->bImpartBaseVelocityX = true;
    this->bImpartBaseVelocityY = true;
    this->bImpartBaseVelocityZ = true;
    this->bImpartBaseAngularVelocity = true;
    this->m_bIgnorePhysBaseImpartVelocity = true;
    this->bJustTeleported = true;
    this->bNotifyApex = false;
    this->bCheatFlying = false;
    this->bIgnoreBaseRotation = false;
    this->m_bApplyBaseRotationOnlyYaw = true;
    this->m_bIgnorePhysBaseRotation = true;
    this->bFastAttachedMove = false;
    this->bAlwaysCheckFloor = true;
    this->bUseFlatBaseForFloorChecks = false;
    this->bWantsToLeaveNavWalking = false;
    this->bUseRVOAvoidance = false;
    this->bRequestedMoveUseAcceleration = true;
    this->bUseNavWalkingMode = false;
    this->bHasRequestedVelocity = false;
    this->bRequestedMoveWithMaxSpeed = false;
    this->bWasAvoidanceUpdated = false;
    this->bProjectNavMeshWalking = false;
    this->bProjectNavMeshOnBothWorldChannels = false;
    this->AvoidanceConsiderationRadius = 500.00f;
    this->AvoidanceUID = 0;
    this->AvoidanceWeight = 1.00f;
    this->NavMeshProjectionInterval = 0.10f;
    this->NavMeshProjectionTimer = 0.00f;
    this->NavMeshProjectionInterpSpeed = 12.00f;
    this->NavMeshProjectionHeightScaleUp = 0.67f;
    this->NavMeshProjectionHeightScaleDown = 1.00f;
    this->m_bNeedFallTravelCheck = false;
    this->m_bCheckEdgeFloat = true;
    this->bComputeEncroachCheck = false;
    this->m_bIgnoreWaterCurrentForce = false;
    this->m_bIgnoreOverlappedForceOnGround = false;
    this->m_bIgnoreOverlappedForceInSky = false;
    this->m_bDisableMoveOnSpawnFrame = false;
    this->m_JumpUpGravityScale = 1.00f;
    this->m_MaxJumpDurationTime = 0.00f;
    this->m_JumpDurationGravityScale = 1.00f;
    this->m_bDisableAutoChangeSwimMoveMode = true;
    this->m_bLocomotionRootMotionDeltaCustom = false;
    this->m_AverageDirectionInterpolationTime = 3.00f;
}

