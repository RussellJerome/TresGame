#include "TresAICharMovementComponent.h"

#include "TresPawnBase.h"

void UTresAICharMovementComponent::SetRVOAvoidanceUID(int32 UID)
{
	AvoidanceUID = UID;
}

int32 UTresAICharMovementComponent::GetRVOAvoidanceUID()
{
	return AvoidanceUID;
}

void UTresAICharMovementComponent::SetRVOAvoidanceWeight(float Weight)
{
	AvoidanceWeight = Weight;
}

float UTresAICharMovementComponent::GetRVOAvoidanceWeight()
{
	return AvoidanceWeight;
}

FVector UTresAICharMovementComponent::GetRVOAvoidanceOrigin()
{
	return GetActorFeetLocation();
}

float UTresAICharMovementComponent::GetRVOAvoidanceRadius()
{
	return 0.0f;
}

float UTresAICharMovementComponent::GetRVOAvoidanceConsiderationRadius()
{
	return AvoidanceConsiderationRadius;
}

float UTresAICharMovementComponent::GetRVOAvoidanceHeight()
{
	return 0.0f;
}

FVector UTresAICharMovementComponent::GetVelocityForRVOConsideration()
{
	return Velocity;
}

int32 UTresAICharMovementComponent::GetAvoidanceGroupMask()
{
	return AvoidanceGroup.Packed;
}

int32 UTresAICharMovementComponent::GetGroupsToAvoidMask()
{
	return GroupsToAvoid.Packed;
}

int32 UTresAICharMovementComponent::GetGroupsToIgnoreMask()
{
	return GroupsToIgnore.Packed;
}


UTresAICharMovementComponent::UTresAICharMovementComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

