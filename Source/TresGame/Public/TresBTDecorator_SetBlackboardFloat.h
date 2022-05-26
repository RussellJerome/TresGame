#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_SetBlackboardFloat.generated.h"

UCLASS()
class UTresBTDecorator_SetBlackboardFloat : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_SetBBKey;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseBB;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_ValueBBKey;
    
    UPROPERTY(EditAnywhere)
    float m_LiteralValue;
    
    UTresBTDecorator_SetBlackboardFloat();
};

