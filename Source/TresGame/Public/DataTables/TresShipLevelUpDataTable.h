#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresShipLevelUpDataTable.generated.h"

USTRUCT()
struct FTresShipLevelUpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_Exp;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPower;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    TRESGAME_API FTresShipLevelUpDataTable();
};

