#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyRecipeType.h"
#include "ETresItemDefFood.h"
#include "ETresItemDefAccessory.h"
#include "ETresItemDefBattleItem.h"
#include "ETresItemDefFoodstuff.h"
#include "TresRemyRewardDataTable.generated.h"

USTRUCT()
struct FTresRemyRewardDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int16 CookingSuccessPoints;
    
    UPROPERTY(EditDefaultsOnly)
    int16 CookingGreatSuccessPoints;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefAccessory Milestone1Reward;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefBattleItem Milestone2Reward;
    
    UPROPERTY(EditDefaultsOnly)
    int16 CircumductionNum;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff CircumductionReward;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFood CookingFailedReward;
    
    UPROPERTY(EditDefaultsOnly)
    RemyRecipeType SpecialFoodStuffRecipeType;
    
    TRESGAME_API FTresRemyRewardDataTable();
};

