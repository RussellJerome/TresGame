#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_n_ex009_ComboHitCheck.generated.h"

UCLASS()
class UTresNpcBTDecorator_n_ex009_ComboHitCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_ComboCount;
    
    UPROPERTY(EditAnywhere)
    int32 m_ComboHitState;
    
    UTresNpcBTDecorator_n_ex009_ComboHitCheck();
};

