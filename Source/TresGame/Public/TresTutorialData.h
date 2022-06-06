#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIGameFlagData.h"
#include "ETresGameHelp.h"
#include "TresTutorialData.generated.h"

USTRUCT()
struct FTresTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    FString DetailTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGameHelp GameHelp;
    
    TRESGAME_API FTresTutorialData();
};

