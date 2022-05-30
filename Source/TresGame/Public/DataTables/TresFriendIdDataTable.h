#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "TresFriendIdDataTable.generated.h"

USTRUCT()
struct FTresFriendIdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_Name;
    
    UPROPERTY(EditDefaultsOnly)
    ETresChrUniqueID m_UniqueID;
    
    TRESGAME_API FTresFriendIdDataTable();
};

