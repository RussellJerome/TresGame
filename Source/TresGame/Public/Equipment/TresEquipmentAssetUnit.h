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
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName UnitName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresCharEquipPart m_AttachPart;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint32 m_bApplyParentScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresWeaponBase> RsrcData;
    
    TRESGAME_API FTresEquipmentAssetUnit();
};

