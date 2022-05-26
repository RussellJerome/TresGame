#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresRemyCookingGameDataTableBase.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyCookingGameDataTableBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GameDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaterialMaxAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaterialIncreasingCorrect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SuccessPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GreatSuccessPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TooManyPercent;
    
    TRESGAME_API FTresRemyCookingGameDataTableBase();
};

