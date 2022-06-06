#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefWeapon.h"
#include "TresShortcutWeaponData.generated.h"

USTRUCT()
struct FTresShortcutWeaponData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon Type1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon Type2;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon Type3;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon Type4;
    
    TRESGAME_API FTresShortcutWeaponData();
};

