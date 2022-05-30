#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBlackboardClassValueModifierInOutParam.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardClassValueModifierInOutParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueA;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBlackboardKey: 1;
    
    UPROPERTY(EditAnywhere)
    UClass* Class;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueB;
    
    TRESGAME_API FTresBlackboardClassValueModifierInOutParam();
};

