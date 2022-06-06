#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresBlackboardValueModifierInOutMethod.h"
#include "UObject/NoExportTypes.h"
#include "TresBlackboardVectorValueModifierInOutParam.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardVectorValueModifierInOutParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueA;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBlackboardKey: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresBlackboardValueModifierInOutMethod::Type> MethodType;
    
    UPROPERTY(EditAnywhere)
    FVector Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyValueB;
    
    TRESGAME_API FTresBlackboardVectorValueModifierInOutParam();
};

