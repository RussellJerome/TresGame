#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefWeapon.h"
#include "TresItemWeaponEnhanceIconDataTable.generated.h"

class UTexture;

USTRUCT()
struct FTresItemWeaponEnhanceIconDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon m_WeaponID;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* PickerIconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* KeybladeIconAsset;
    
    TRESGAME_API FTresItemWeaponEnhanceIconDataTable();
};

