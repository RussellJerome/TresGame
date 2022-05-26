#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBlackboardFloatValueModifier.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardFloatValueModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> ValueModifierType;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BBKey;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    TRESGAME_API FTresBlackboardFloatValueModifier();
};

