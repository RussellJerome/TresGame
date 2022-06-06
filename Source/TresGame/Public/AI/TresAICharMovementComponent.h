#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DMovementProperties.h"
#include "TresCharMovementComponent.h"
#include "Mercuna3DMovementInterface.h"
#include "TresAICharMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAICharMovementComponent : public UTresCharMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMercuna3DMovementProperties MovementProperties;
    
public:
    UTresAICharMovementComponent();

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

