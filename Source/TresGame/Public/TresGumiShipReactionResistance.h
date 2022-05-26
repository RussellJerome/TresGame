#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipReactionResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipReactionResistance {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bBrow;
    
    TRESGAME_API FTresGumiShipReactionResistance();
};

