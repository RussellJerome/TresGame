#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldAreaCode.h"
#include "TresTreasureDataTable.generated.h"

USTRUCT()
struct TRESGAME_API FTresTreasureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TreasureName;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bUnused: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    FTresTreasureDataTable();
};

