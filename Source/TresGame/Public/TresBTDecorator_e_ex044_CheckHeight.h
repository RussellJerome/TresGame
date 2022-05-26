#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex044_CheckHeight.generated.h"

UCLASS()
class UTresBTDecorator_e_ex044_CheckHeight : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fCheckHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_fPoleTurnRadius;
    
    UTresBTDecorator_e_ex044_CheckHeight();
};

