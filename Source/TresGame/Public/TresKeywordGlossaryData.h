#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagText.h"
#include "Engine/DataTable.h"
#include "ETresUIDataVersion.h"
#include "TresKeywordGlossaryData.generated.h"

USTRUCT()
struct FTresKeywordGlossaryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagText KeywordText;
    
    UPROPERTY(EditDefaultsOnly)
    FString DetailTextID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresKeywordGlossaryData();
};

