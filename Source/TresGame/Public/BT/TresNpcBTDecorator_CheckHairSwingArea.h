#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_CheckHairSwingArea.generated.h"

UCLASS()
class UTresNpcBTDecorator_CheckHairSwingArea : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(EditAnywhere)
    float m_CheckLength;
    
    UTresNpcBTDecorator_CheckHairSwingArea();
};

