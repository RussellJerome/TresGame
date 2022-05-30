#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresBlackboardValueModifierInOutMethod.h"
#include "TresBlackboardIntValueModifierInOutParam.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardIntValueModifierInOutParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bEnableCheck: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CheckBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueA;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBlackboardKey: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresBlackboardValueModifierInOutMethod::Type> MethodType;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueB;
    
    TRESGAME_API FTresBlackboardIntValueModifierInOutParam();
};

