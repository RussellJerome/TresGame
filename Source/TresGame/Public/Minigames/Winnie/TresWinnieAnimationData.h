#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresWinnieAnimationData.generated.h"

USTRUCT()
struct FTresWinnieAnimationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AnimationName;
    
    UPROPERTY(EditDefaultsOnly)
    bool isLoop;
    
    TRESGAME_API FTresWinnieAnimationData();
};

