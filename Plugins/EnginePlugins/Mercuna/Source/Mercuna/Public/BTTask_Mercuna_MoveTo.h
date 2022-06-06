#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Mercuna_MoveTo.generated.h"

UCLASS()
class MERCUNA_API UBTTask_Mercuna_MoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float EndDistance;
    
    UPROPERTY()
    uint8 bObserveBlackboardValue: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowPartialPath: 1;
    
    UBTTask_Mercuna_MoveTo();
};

