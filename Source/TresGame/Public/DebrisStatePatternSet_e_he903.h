#pragma once
#include "CoreMinimal.h"
#include "DebrisStatePattern_e_he903.h"
#include "DebrisStatePatternSet_e_he903.generated.h"

USTRUCT(BlueprintType)
struct FDebrisStatePatternSet_e_he903 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDebrisStatePattern_e_he903> m_DebrisStatePatternArray;
    
    TRESGAME_API FDebrisStatePatternSet_e_he903();
};

