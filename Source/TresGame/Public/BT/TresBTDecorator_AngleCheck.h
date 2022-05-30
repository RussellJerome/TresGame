#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_AngleCheck.generated.h"

UCLASS()
class UTresBTDecorator_AngleCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    float DesiredAngle;
    
    UPROPERTY(EditAnywhere)
    float Tolerance;
    
    UPROPERTY(EditAnywhere)
    bool Use3D_Angle;
    
    UTresBTDecorator_AngleCheck();
};

