#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIGameFlagData.h"
#include "TresNextTodoData.generated.h"

USTRUCT()
struct FTresNextTodoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresNextTodoData();
};

