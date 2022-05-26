#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresLuckyMarkMilestoneRewardDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresLuckyMarkMilestoneRewardDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RewardIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MarkCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 CompleteRewardFlag: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RewardTreasureName;
    
    TRESGAME_API FTresLuckyMarkMilestoneRewardDataTable();
};

