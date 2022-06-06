#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "Engine/EngineTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsMovementMode.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsMovementMode : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_MovementMode;
    
    UTresNpcBTDecorator_IsMovementMode();
};

