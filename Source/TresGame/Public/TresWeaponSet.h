#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEquipmentSetTable.h"
#include "TresEquipmentSetAssetUnit.h"
#include "TresWeaponSet.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(BlueprintType)
class TRESGAME_API UTresWeaponSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetTable> MyEquipTbl;
    
    UPROPERTY(EditDefaultsOnly)
    FName FormName[25];
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetAssetUnit> Equips;
    
public:
    UTresWeaponSet();
};

