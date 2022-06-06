#pragma once
#include "CoreMinimal.h"
#include "TresEquipWeaponSlotWork.generated.h"

class UTresEquipDataBase;

USTRUCT(BlueprintType)
struct FTresEquipWeaponSlotWork {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTresEquipDataBase* m_pAsset;
    
    TRESGAME_API FTresEquipWeaponSlotWork();
};

