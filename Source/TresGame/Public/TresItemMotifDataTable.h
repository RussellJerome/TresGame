#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresItemMotifDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemMotifDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_FlagIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bSevenPrincessFlag: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_GameFlagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_GameFlagLabel;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PrevMotifName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_HelptTextID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    TRESGAME_API FTresItemMotifDataTable();
};

