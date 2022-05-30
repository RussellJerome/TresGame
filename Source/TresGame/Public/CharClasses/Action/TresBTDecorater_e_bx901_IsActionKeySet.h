#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorater_e_bx901_IsActionKeySet.generated.h"

UCLASS()
class UTresBTDecorater_e_bx901_IsActionKeySet : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActionKeyName;
    
    UTresBTDecorater_e_bx901_IsActionKeySet();
};

