#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresCharEquipPart.h"
#include "TresEquipmentAssetUnit.generated.h"

class ATresWeaponBase;

USTRUCT(BlueprintType)
struct FTresEquipmentAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName UnitName;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCharEquipPart m_AttachPart;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bApplyParentScale: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWeaponBase> RsrcData;
    
    TRESGAME_API FTresEquipmentAssetUnit();
};

