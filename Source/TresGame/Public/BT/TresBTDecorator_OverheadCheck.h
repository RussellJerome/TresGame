#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverheadCheck.generated.h"

UCLASS()
class UTresBTDecorator_OverheadCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_RangeXY;
    
    UPROPERTY(EditAnywhere)
    float m_RangeZ;
    
    UTresBTDecorator_OverheadCheck();
};

