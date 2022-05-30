#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBlackboardBoolValueModifierInOutParam.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardBoolValueModifierInOutParam {
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
    uint8 bValue: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueB;
    
    TRESGAME_API FTresBlackboardBoolValueModifierInOutParam();
};

