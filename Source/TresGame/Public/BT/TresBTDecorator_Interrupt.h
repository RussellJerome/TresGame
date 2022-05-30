#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EInterruptableEvent.h"
#include "SQEX_AI_Enums.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EInterruptAbortBehavior -FallbackName=EInterruptAbortBehavior
#include "TresBTDecorator_Interrupt.generated.h"

UCLASS()
class UTresBTDecorator_Interrupt : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EInterruptableEvent::Type> EventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EInterruptAbortBehavior::Type> CustomAbortBehavior;
    
    UTresBTDecorator_Interrupt();
};

