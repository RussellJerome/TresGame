#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTComposite_RandomFluctuation.generated.h"

UCLASS()
class UTresBTComposite_RandomFluctuation : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 bFailOnAll: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Weights;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyIndex;
    
    UPROPERTY(EditAnywhere)
    float FluctuationValue;
    
    UTresBTComposite_RandomFluctuation();
};

