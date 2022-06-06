#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_Mercuna_Reachable.generated.h"

UCLASS()
class MERCUNA_API UBTDecorator_Mercuna_Reachable : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Destination;
    
    UPROPERTY(EditAnywhere)
    float MaxPathLength;
    
public:
    UBTDecorator_Mercuna_Reachable();
};

