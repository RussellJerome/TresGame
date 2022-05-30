#pragma once
#include "CoreMinimal.h"
#include "ETresWeaponGrowLvl.h"
#include "TresEquipmentAssetUnit.h"
#include "ETresCharWearForm.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "UObject/NoExportTypes.h"
#include "TresEquipValiableSet.generated.h"

class UTresProjectileSet;
class UTresAnimSet;
class UTresPlayerMagicSet;
class UTresUIDataAsset;

USTRUCT(BlueprintType)
struct FTresEquipValiableSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresWeaponGrowLvl m_GrowLevel;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAssetUnit> m_Equips;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAssetUnit> m_TransformSetData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCharWearForm m_OwnerWearForm;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ReplaceIKOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAsset;
    
    TRESGAME_API FTresEquipValiableSet();
};

