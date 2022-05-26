#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_FloorHeightCheck.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_FloorHeightCheckSpecifiedLocationContext.generated.h"

UCLASS()
class UTresBTDecorator_FloorHeightCheckSpecifiedLocationContext : public UTresBTDecorator_FloorHeightCheck {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LocationContext;
    
public:
    UTresBTDecorator_FloorHeightCheckSpecifiedLocationContext();
};

