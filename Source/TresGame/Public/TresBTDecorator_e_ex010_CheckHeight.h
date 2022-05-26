#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "TresBTDecorator_e_ex010_CheckHeight.generated.h"

UCLASS()
class UTresBTDecorator_e_ex010_CheckHeight : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fHeightThreshold;
    
    UTresBTDecorator_e_ex010_CheckHeight();
};

