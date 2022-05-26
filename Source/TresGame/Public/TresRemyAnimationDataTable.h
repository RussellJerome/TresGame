#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyAnimationType.h"
#include "TresRemyAnimationDataTable.generated.h"

USTRUCT()
struct FTresRemyAnimationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyAnimationType AnimationType;
    
    UPROPERTY(EditDefaultsOnly)
    FName AnimationName;
    
    TRESGAME_API FTresRemyAnimationDataTable();
};

