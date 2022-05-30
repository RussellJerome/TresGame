#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_DotCheck.generated.h"

UCLASS()
class UTresBTDecorator_DotCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    float Tolerance;
    
    UPROPERTY(EditAnywhere)
    bool Use3D_Angle;
    
    UTresBTDecorator_DotCheck();
};

