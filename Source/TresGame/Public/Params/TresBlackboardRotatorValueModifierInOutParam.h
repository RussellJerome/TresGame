#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresBlackboardRotatorValueModifierInOutParam.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardRotatorValueModifierInOutParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueA;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBlackboardKey: 1;
    
    UPROPERTY(EditAnywhere)
    FRotator Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueB;
    
    TRESGAME_API FTresBlackboardRotatorValueModifierInOutParam();
};

