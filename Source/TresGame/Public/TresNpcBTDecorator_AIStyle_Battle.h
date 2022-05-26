#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAIStyle_Battle.h"
#include "TresNpcBTDecorator_AIStyle_Battle.generated.h"

UCLASS()
class UTresNpcBTDecorator_AIStyle_Battle : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresFNpcAIStyle_Battle m_BattleStyle;
    
    UTresNpcBTDecorator_AIStyle_Battle();
};

