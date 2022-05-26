#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_CoverWaitCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_CoverWaitCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_AdjustLength;
    
    UTresNpcBTDecorator_CoverWaitCheck();
};

