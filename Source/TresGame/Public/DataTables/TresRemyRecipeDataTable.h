#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyDishCategory.h"
#include "ETresItemDefFood.h"
#include "RemyMenuType.h"
#include "RemyRecipeType.h"
#include "RemyCookingGameType.h"
#include "RemyDishLevel.h"
#include "ETresItemDefFoodstuff.h"
#include "TresRemyRecipeDataTable.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresRemyRecipeDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyDishCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyMenuType MenuType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyRecipeType RecipeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RecipeNameTextID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RecipeHelpTextID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyCookingGameType GameType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    RemyDishLevel DishLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PawnDataID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture* IconAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresItemDefFood CommonItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresItemDefFood GoodItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETresItemDefFoodstuff, int32> FoodList;
    
    TRESGAME_API FTresRemyRecipeDataTable();
};

