#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAbilityKind.h"
#include "TresFoodCompleteMealEffectDataTable.generated.h"

USTRUCT()
struct FTresFoodCompleteMealEffectDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AbilityPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Level;
    
    TRESGAME_API FTresFoodCompleteMealEffectDataTable();
};

