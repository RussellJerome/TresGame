#pragma once
#include "CoreMinimal.h"
#include "TresPhantomBlitzQuickTurnaroundExecuteParam.generated.h"

USTRUCT(BlueprintType)
struct FTresPhantomBlitzQuickTurnaroundExecuteParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> QuickTurnaroundExecuteNumList;
    
    TRESGAME_API FTresPhantomBlitzQuickTurnaroundExecuteParam();
};

