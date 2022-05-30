#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_IsCombiPhase.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsCombiPhase : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_PhaseIndex;
    
    UTresNpcBTDecorator_IsCombiPhase();
};

