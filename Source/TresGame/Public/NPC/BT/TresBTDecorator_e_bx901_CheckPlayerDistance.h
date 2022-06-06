#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_bx901_CheckPlayerDistance.generated.h"

UCLASS()
class UTresBTDecorator_e_bx901_CheckPlayerDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMin;
    
    UPROPERTY(EditAnywhere)
    float m_fMax;
    
    UPROPERTY()
    bool m_bMin;
    
    UPROPERTY()
    bool m_bMax;
    
    UTresBTDecorator_e_bx901_CheckPlayerDistance();
};

