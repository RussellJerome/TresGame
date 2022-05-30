#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverrideGameLevelSetBlackboard.generated.h"

UCLASS()
class UTresBTDecorator_OverrideGameLevelSetBlackboard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Key;
    
    UPROPERTY(EditAnywhere)
    float m_ValueBeginner;
    
    UPROPERTY(EditAnywhere)
    float m_ValueStandard;
    
    UPROPERTY(EditAnywhere)
    float m_ValueProud;
    
    UPROPERTY(EditAnywhere)
    float m_ValueCritical;
    
    UTresBTDecorator_OverrideGameLevelSetBlackboard();
};

