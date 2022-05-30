#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardFloatLerpKey.generated.h"

class UCurveFloat;

UCLASS()
class UTresBTTask_BlackboardFloatLerpKey : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bUseCurveData: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInB;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurveIn;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueInParameter;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseInverseParameter: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueOut;
    
    UTresBTTask_BlackboardFloatLerpKey();
};

