#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresDamageAttribute.h"
#include "ETresAIAttrResistKind.h"
#include "TresNpcBTDecorator_IsTargetAttrResistKind.generated.h"

UCLASS()
class UTresNpcBTDecorator_IsTargetAttrResistKind : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresDamageAttribute m_Attribute;
    
    UPROPERTY(EditAnywhere)
    TArray<ETresAIAttrResistKind> m_AttrResistKinds;
    
    UTresNpcBTDecorator_IsTargetAttrResistKind();
};

