#pragma once
#include "CoreMinimal.h"
#include "TresKeybladeAbilityData.h"
#include "Engine/DataAsset.h"
#include "ETresItemDefWeapon.h"
#include "TresKeybladeAbilityDataAsset.generated.h"

UCLASS()
class TRESGAME_API UTresKeybladeAbilityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresItemDefWeapon, FTresKeybladeAbilityData> m_Datas;
    
public:
    UTresKeybladeAbilityDataAsset();
};

