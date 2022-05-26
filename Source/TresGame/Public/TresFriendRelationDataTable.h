#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "TresFriendRelationDataTable.generated.h"

USTRUCT()
struct FTresFriendRelationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresChrUniqueID m_UniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Index;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_BodySize;
    
    TRESGAME_API FTresFriendRelationDataTable();
};

