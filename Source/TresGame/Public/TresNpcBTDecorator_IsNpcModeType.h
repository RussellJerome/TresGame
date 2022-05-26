#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresFNpcAINpcMode.h"
#include "TresNpcBTDecorator_IsNpcModeType.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsNpcModeType : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresFNpcAINpcMode> m_NpcModes;
    
    UTresNpcBTDecorator_IsNpcModeType();
};

