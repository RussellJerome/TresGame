#pragma once
#include "CoreMinimal.h"
#include "TresUICampMenuCuisineFavoriteItem.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUICampMenuCuisineFavoriteItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxObject* Icon;
    
    UPROPERTY(Transient)
    UGFxObject* TextIcon;
    
    UPROPERTY(Transient)
    UGFxObject* Name;
    
    UPROPERTY(Transient)
    UGFxObject* TextName;
    
    UPROPERTY(Transient)
    UGFxObject* Num;
    
    UPROPERTY(Transient)
    UGFxObject* TextNum;
    
    TRESGAME_API FTresUICampMenuCuisineFavoriteItem();
};

