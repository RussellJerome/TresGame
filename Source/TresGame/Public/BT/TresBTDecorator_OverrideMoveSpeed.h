#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideMoveSpeed.generated.h"

UCLASS()
class UTresBTDecorator_OverrideMoveSpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_SpeedRatio;
    
    UPROPERTY(EditAnywhere)
    float m_TimeLimit;
    
    UTresBTDecorator_OverrideMoveSpeed();
};

