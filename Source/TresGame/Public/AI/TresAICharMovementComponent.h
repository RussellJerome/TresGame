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
    
    // Fix for true pure virtual functions not being implemented
};

