#pragma once
#include "CoreMinimal.h"
#include "TresEquipDataBase.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipWeaponData.generated.h"

UCLASS()
class TRESGAME_API UTresEquipWeaponData : public UTresEquipDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEquipmentAssetUnit> m_Equips;
    
public:
    UTresEquipWeaponData();
};

