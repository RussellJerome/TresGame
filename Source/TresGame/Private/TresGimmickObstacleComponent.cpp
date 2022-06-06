#include "TresGimmickObstacleComponent.h"


void UTresGimmickObstacleComponent::SetRVOAvoidanceUID(int32 UID)
{
}

int32 UTresGimmickObstacleComponent::GetRVOAvoidanceUID()
{
    return 0;
}

void UTresGimmickObstacleComponent::SetRVOAvoidanceWeight(float Weight)
{
}

float UTresGimmickObstacleComponent::GetRVOAvoidanceWeight()
{
    return 0.f;
}
	
FVector UTresGimmickObstacleComponent::GetRVOAvoidanceOrigin()
{
    return FVector(0);
}
	
float UTresGimmickObstacleComponent::GetRVOAvoidanceRadius()
{
    return 0.f;
}
	
float UTresGimmickObstacleComponent::GetRVOAvoidanceHeight()
{
    return 0.f;
}
	
float UTresGimmickObstacleComponent::GetRVOAvoidanceConsiderationRadius()
{
    return 0.f;
}
	
FVector UTresGimmickObstacleComponent::GetVelocityForRVOConsideration()
{
    return FVector(0);
}
	
int32 UTresGimmickObstacleComponent::GetAvoidanceGroupMask()
{
    return 0;
}
	
int32 UTresGimmickObstacleComponent::GetGroupsToAvoidMask()
{
    return 0;
}
	
int32 UTresGimmickObstacleComponent::GetGroupsToIgnoreMask()
{
    return 0;
}

UTresGimmickObstacleComponent::UTresGimmickObstacleComponent() {
    this->m_bManual = false;
    this->m_Radius = 50.00f;
    this->m_Height = 50.00f;
    this->m_AvoidanceConsiderationRadius = 500.00f;
}

