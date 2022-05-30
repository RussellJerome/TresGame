#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyRestaurantRank.h"
#include "RemyKitchenGrade.h"
#include "RemyMilestone.h"
#include "TresRemyRestaurantRankDataTable.generated.h"

USTRUCT()
struct FTresRemyRestaurantRankDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    RemyRestaurantRank Rank;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NecessaryPoint;
    
    UPROPERTY(EditDefaultsOnly)
    RemyMilestone Milestone;
    
    UPROPERTY(EditDefaultsOnly)
    RemyKitchenGrade KitchenGrade;
    
    TRESGAME_API FTresRemyRestaurantRankDataTable();
};

