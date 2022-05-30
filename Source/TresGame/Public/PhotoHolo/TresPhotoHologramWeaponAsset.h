#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEquipmentAssetUnit.h"
#include "TresPhotoHologramWeaponAsset.generated.h"

class UDataTable;
class UTresAnimSet;

UCLASS()
class UTresPhotoHologramWeaponAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresEquipmentAssetUnit> FixedEquips;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PoseDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> ReplaceAnimSets;
    
    UTresPhotoHologramWeaponAsset();
};

