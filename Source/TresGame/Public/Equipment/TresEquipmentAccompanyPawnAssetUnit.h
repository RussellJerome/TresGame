#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresCommandKind.h"
#include "TresEquipmentAccompanyPawnAssetUnit.generated.h"

class ATresAccompanyPawnBase;

USTRUCT(BlueprintType)
struct FTresEquipmentAccompanyPawnAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_Command;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_AssetData;
    
    TRESGAME_API FTresEquipmentAccompanyPawnAssetUnit();
};

