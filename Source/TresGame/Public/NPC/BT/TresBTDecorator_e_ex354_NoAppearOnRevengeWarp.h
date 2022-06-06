#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_NoAppearOnRevengeWarp.generated.h"

UCLASS()
class UTresBTDecorator_e_ex354_NoAppearOnRevengeWarp : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInEnable;
    
    UPROPERTY(EditAnywhere)
    bool m_bOutDisable;
    
    UTresBTDecorator_e_ex354_NoAppearOnRevengeWarp();
};

