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
    UTresAICharMovementComponent(const FObjectInitializer& ObjectInitializer);
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMercuna3DMovementProperties MovementProperties;
    
public:
    

    /** BEGIN IRVOAvoidanceInterface */
    virtual void SetRVOAvoidanceUID(int32 UID) override;
    virtual int32 GetRVOAvoidanceUID() override;
    virtual void SetRVOAvoidanceWeight(float Weight) override;
    virtual float GetRVOAvoidanceWeight() override;
    virtual FVector GetRVOAvoidanceOrigin() override;
    virtual float GetRVOAvoidanceRadius() override;
    virtual float GetRVOAvoidanceHeight() override;
    virtual float GetRVOAvoidanceConsiderationRadius() override;
    virtual FVector GetVelocityForRVOConsideration() override;
    virtual int32 GetAvoidanceGroupMask() override;
    virtual int32 GetGroupsToAvoidMask() override;
    virtual int32 GetGroupsToIgnoreMask() override;
    /** END IRVOAvoidanceInterface */

    
    
    // Fix for true pure virtual functions not being implemented
};

