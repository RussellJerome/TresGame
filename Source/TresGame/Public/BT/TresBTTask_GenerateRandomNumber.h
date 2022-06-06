#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_GenerateRandomNumber.generated.h"

UCLASS()
class UTresBTTask_GenerateRandomNumber : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseRange: 1;
    
    UPROPERTY(EditAnywhere)
    float m_MinValue;
    
    UPROPERTY(EditAnywhere)
    float m_MaxValue;
    
    UTresBTTask_GenerateRandomNumber();
};

