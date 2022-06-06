#pragma once
#include "CoreMinimal.h"
#include "ETresItemSynthesisCondition.h"
#include "TresItemSynthesisDataTableBase.h"
#include "TresItemSynthesisDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemSynthesisDataTable : public FTresItemSynthesisDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_FlagIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RewardItem;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemSynthesisCondition m_Condition;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ConditionName;
    
    TRESGAME_API FTresItemSynthesisDataTable();
};

