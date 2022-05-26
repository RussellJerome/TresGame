#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresNpcUseItemType.h"
#include "TresNpcBTDecorator_HasItem.generated.h"

UCLASS()
class UTresNpcBTDecorator_HasItem : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresNpcUseItemType m_UseItemType;
    
    UTresNpcBTDecorator_HasItem();
};

