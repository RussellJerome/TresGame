#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTService_BlackboardFloatLerpKey.generated.h"

class UCurveFloat;

UCLASS()
class UTresBTService_BlackboardFloatLerpKey : public UBTService {
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
    
    UPROPERTY(EditAnywhere)
    float m_Interval;
    
    UTresBTService_BlackboardFloatLerpKey();
};

