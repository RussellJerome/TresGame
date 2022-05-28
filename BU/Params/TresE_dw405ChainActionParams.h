#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405ChainActionParam.h"
#include "TresE_dw405ChainActionParams.generated.h"

USTRUCT()
struct FTresE_dw405ChainActionParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405ChainActionParam> Params;
    
    TRESGAME_API FTresE_dw405ChainActionParams();
};

