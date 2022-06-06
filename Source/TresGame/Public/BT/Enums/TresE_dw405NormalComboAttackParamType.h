#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405NormalComboAttackParam.h"
#include "TresE_dw405NormalComboAttackParamType.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboAttackParamType {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresE_dw405NormalComboAttackParam Type[2];
    
    TRESGAME_API FTresE_dw405NormalComboAttackParamType();
};

