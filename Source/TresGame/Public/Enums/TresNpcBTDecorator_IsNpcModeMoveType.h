#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_IsNpcModeMoveType.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsNpcModeMoveType : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bWalk;
    
    UTresNpcBTDecorator_IsNpcModeMoveType();
};

