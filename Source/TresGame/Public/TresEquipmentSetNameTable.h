#pragma once
#include "CoreMinimal.h"
#include "ETresWeaponForm.h"
#include "ETresWeaponGrowLvl.h"
#include "TresEquipmentSetNameTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipmentSetNameTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresWeaponForm m_FormType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresWeaponGrowLvl m_GrowLevel;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EquipSetName;
    
    TRESGAME_API FTresEquipmentSetNameTable();
};

