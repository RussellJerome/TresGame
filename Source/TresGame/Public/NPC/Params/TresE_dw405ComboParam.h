#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405AttackParam.h"
#include "TresE_dw405ComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405ComboParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405AttackParam> AttackParams;
    
    TRESGAME_API FTresE_dw405ComboParam();
};

