#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_ActionTaskLimitCountCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_ActionTaskLimitCountCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Count;
    
    UTresNpcBTDecorator_ActionTaskLimitCountCheck();
};

