#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_ActionTaskLimitPhaseCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_ActionTaskLimitPhaseCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Phase;
    
    UTresNpcBTDecorator_ActionTaskLimitPhaseCheck();
};

