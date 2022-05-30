#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAICombiID.h"
#include "TresNpcBTDecorator_IsCombiID.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsCombiID : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresFNpcAICombiID m_Id;
    
    UTresNpcBTDecorator_IsCombiID();
};

