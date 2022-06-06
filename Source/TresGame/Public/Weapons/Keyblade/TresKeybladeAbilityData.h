#pragma once
#include "CoreMinimal.h"
#include "ETresTextAbilityKind.h"
#include "ETresCharWearForm.h"
#include "ETresWeaponForm.h"
#include "TresKeybladeFormAbilityData.h"
#include "TresKeybladeAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FTresKeybladeAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresTextAbilityKind> m_ShootflowAbilitys;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresCharWearForm> m_WearForms;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETresWeaponForm, FTresKeybladeFormAbilityData> m_FormAbilityMap;
    
    TRESGAME_API FTresKeybladeAbilityData();
};

