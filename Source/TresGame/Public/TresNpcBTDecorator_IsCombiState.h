#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAICombiState.h"
#include "TresNpcBTDecorator_IsCombiState.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsCombiState : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresFNpcAICombiState m_State;
    
    UTresNpcBTDecorator_IsCombiState();
};

