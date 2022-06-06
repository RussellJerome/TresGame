#pragma once
#include "CoreMinimal.h"
#include "ETresNpcSmartphoneCameraState.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsSmaphoCameraState.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsSmaphoCameraState : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresNpcSmartphoneCameraState> m_States;
    
    UTresNpcBTDecorator_IsSmaphoCameraState();
};

