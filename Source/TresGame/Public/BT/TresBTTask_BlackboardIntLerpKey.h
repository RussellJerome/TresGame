#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardIntLerpKey.generated.h"

class UCurveFloat;

UCLASS()
class UTresBTTask_BlackboardIntLerpKey : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_bUseCurveData: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInB;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurveIn;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInParameter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bUseInverseParameter: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueOut;
    
    UTresBTTask_BlackboardIntLerpKey();
};

