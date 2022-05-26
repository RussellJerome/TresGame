#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "ETresCharWearForm.h"
#include "UObject/NoExportTypes.h"
#include "TresEquipmentSetAssetUnit.generated.h"

class UTresProjectileSet;
class UTresAnimSet;
class USkeletalMesh;
class UTresPlayerMagicSet;

USTRUCT(BlueprintType)
struct FTresEquipmentSetAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName SetName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAssetUnit> SetData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAssetUnit> TransformSetData;
    
    UPROPERTY()
    USkeletalMesh* m_ReplaceSkinAsset;
    
    UPROPERTY(EditDefaultsOnly)
    ETresCharWearForm m_OwnerWearForm;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> ReplaceAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(EditDefaultsOnly)
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ReplaceIKOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
    
    TRESGAME_API FTresEquipmentSetAssetUnit();
};

