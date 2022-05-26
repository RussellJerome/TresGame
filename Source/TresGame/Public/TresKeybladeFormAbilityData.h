#pragma once
#include "CoreMinimal.h"
#include "ETresTextAbilityKind.h"
#include "TresKeybladeFormAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FTresKeybladeFormAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresTextAbilityKind> m_TextAbilitys;
    
    TRESGAME_API FTresKeybladeFormAbilityData();
};

