#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresCharWearForm.h"
#include "TresFormAbilitySetUnit.h"
#include "TresFormAbilitySet.generated.h"

UCLASS()
class UTresFormAbilitySet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresCharWearForm, FTresFormAbilitySetUnit> m_Data;
    
public:
    UTresFormAbilitySet();
};

