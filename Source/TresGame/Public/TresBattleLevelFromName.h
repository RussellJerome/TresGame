#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresBattleLevelFromName.generated.h"

USTRUCT()
struct TRESGAME_API FTresBattleLevelFromName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 BattleLevel;
    
    FTresBattleLevelFromName();
};

