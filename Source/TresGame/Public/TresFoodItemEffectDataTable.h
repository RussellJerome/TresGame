#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresFoodItemEffectDataTable.generated.h"

USTRUCT()
struct FTresFoodItemEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxHPPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxMPPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DefensePlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_FoodItemLevel;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPlusFoodItem;
    
    TRESGAME_API FTresFoodItemEffectDataTable();
};

