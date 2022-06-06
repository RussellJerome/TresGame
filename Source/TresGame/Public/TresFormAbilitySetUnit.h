#pragma once
#include "CoreMinimal.h"
#include "ETresAbilityKind.h"
#include "ETresTextAbilityKind.h"
#include "TresFormAbilitySetUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresFormAbilitySetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_Ability;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresTextAbilityKind> m_TextAbility;
    
    TRESGAME_API FTresFormAbilitySetUnit();
};

