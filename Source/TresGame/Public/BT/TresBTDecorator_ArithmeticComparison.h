#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresArithmeticComparisonSource.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_ArithmeticComparison.generated.h"

UCLASS()
class UTresBTDecorator_ArithmeticComparison : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresArithmeticComparisonSource::Type> ValueTypeA;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUseBlackboardA: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUsePropertyOrFunctionA: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUseLiteralA: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FName PropertyNameA;
    
    UPROPERTY(EditAnywhere)
    float LiteralValueA;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresArithmeticComparisonSource::Type> ValueTypeB;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUseBlackboardB: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUsePropertyOrFunctionB: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUseLiteralB: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
    UPROPERTY(EditAnywhere)
    FName PropertyNameB;
    
    UPROPERTY(EditAnywhere)
    float LiteralValueB;
    
    UTresBTDecorator_ArithmeticComparison();
};

