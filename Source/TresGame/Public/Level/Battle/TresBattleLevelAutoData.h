#pragma once
#include "CoreMinimal.h"
#include "ETresWorldAreaCode.h"
#include "ETresWorldCode.h"
#include "TresBattleLevelAutoData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresBattleLevelAutoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldAreaCode> AreaCode;
    
    UPROPERTY(EditDefaultsOnly)
    FName LabelStart;
    
    UPROPERTY(EditDefaultsOnly)
    FName LabelEnd;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BattleLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BattleLevelDLC;
    
    FTresBattleLevelAutoData();
};

