#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresFriendHomePosDataTable.generated.h"

USTRUCT()
struct FTresFriendHomePosDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_BaseLen;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BaseRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MiddleLen;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MiddleRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LargeLen;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LargeRot;
    
    TRESGAME_API FTresFriendHomePosDataTable();
};

