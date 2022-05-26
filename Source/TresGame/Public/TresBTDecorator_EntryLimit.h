#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_EntryLimit.generated.h"

UCLASS()
class UTresBTDecorator_EntryLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_MaxEntries;
    
    UPROPERTY(EditAnywhere)
    bool m_IncrementOnlyOnSuccess;
    
    UPROPERTY(EditAnywhere)
    bool m_bInitSubtree;
    
    UTresBTDecorator_EntryLimit();
};

