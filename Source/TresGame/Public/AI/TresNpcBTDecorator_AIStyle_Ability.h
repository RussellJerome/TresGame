#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAIStyle_Ability.h"
#include "TresNpcBTDecorator_AIStyle_Ability.generated.h"

UCLASS()
class UTresNpcBTDecorator_AIStyle_Ability : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresFNpcAIStyle_Ability m_AbilityStyle;
    
    UTresNpcBTDecorator_AIStyle_Ability();
};

