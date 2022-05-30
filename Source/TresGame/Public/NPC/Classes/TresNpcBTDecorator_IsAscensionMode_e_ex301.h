#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsAscensionMode_e_ex301.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsAscensionMode_e_ex301 : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UTresNpcBTDecorator_IsAscensionMode_e_ex301();
};

