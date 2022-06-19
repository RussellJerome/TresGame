#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "ETresArithmeticModifierSource.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardArithmeticModifier.generated.h"

UCLASS()
class UTresBTTask_BlackboardArithmeticModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresArithmeticModifierSource::Type> ValueTypeB;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bUseBlackboardB: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bUsePropertyOrFunctionB: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint32 bUseLiteralB: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
    UPROPERTY(EditAnywhere)
    FName PropertyNameB;
    
    UPROPERTY(EditAnywhere)
    float LiteralValueB;
    
    UTresBTTask_BlackboardArithmeticModifier();
};

