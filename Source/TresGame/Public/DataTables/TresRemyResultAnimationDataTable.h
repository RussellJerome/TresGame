#pragma once
#include "CoreMinimal.h"
#include "RemyResultAnimationType.h"
#include "Engine/DataTable.h"
#include "RemyCookingGameType.h"
#include "TresRemyResultAnimationDataTable.generated.h"

USTRUCT()
struct FTresRemyResultAnimationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyCookingGameType GameType;
    
    UPROPERTY(EditDefaultsOnly)
    RemyResultAnimationType AnimationType;
    
    UPROPERTY(EditDefaultsOnly)
    FName AnimationName;
    
    TRESGAME_API FTresRemyResultAnimationDataTable();
};

