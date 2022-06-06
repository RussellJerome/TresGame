#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "RemyCuttingFoodType.h"
#include "RemyCookingCommand.h"
#include "TresRemyCuttingDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyCuttingDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyCuttingFoodType FoodType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickCuttingValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickReloadValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReloadStickNoInputValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ReloadCutTimesRangeStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ReloadCutTimesRangeEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<RemyCookingCommand> ReloadCommand1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<RemyCookingCommand> ReloadCommand2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ReloadTime;
    
    TRESGAME_API FTresRemyCuttingDataTable();
};

