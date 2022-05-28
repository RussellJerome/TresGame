#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex036OverrideSwingSpeed.generated.h"

UCLASS()
class UTresBTDecorator_e_ex036OverrideSwingSpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_SwingSpeed;
    
    UTresBTDecorator_e_ex036OverrideSwingSpeed();
};

