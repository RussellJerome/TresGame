#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresNameEntryTextData.h"
#include "TresNameEntryTextDataTable.generated.h"

USTRUCT()
struct FTresNameEntryTextDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresNameEntryTextData TextList[9];
    
    TRESGAME_API FTresNameEntryTextDataTable();
};

