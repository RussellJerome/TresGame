#include "TresRemyRecipeDataTable.h"

FTresRemyRecipeDataTable::FTresRemyRecipeDataTable() {
    this->Category = RemyDishCategory::Appetizer;
    this->MenuType = RemyMenuType::Normal;
    this->RecipeType = RemyRecipeType::NOTHING;
    this->GameType = RemyCookingGameType::Flambe;
    this->DishLevel = RemyDishLevel::RemyDishLevel1;
    this->CommonItemId = ETresItemDefFood::NOTHING;
    this->GoodItemId = ETresItemDefFood::NOTHING;
}

